/* SPDX-License-Identifier: GPL-2.0-only */

#include <assert.h>
#include <console/console.h>
#include <delay.h>
#include <soc/pmif.h>
#include <soc/mt6315.h>

static struct pmif *pmif_arb = NULL;

static const struct mt6315_setting init_setting_cpu[] = {
	/* disable magic key protection */
	{0x3A9, 0x63, 0xFF, 0},
	{0x3A8, 0x15, 0xFF, 0},
	{0x3A0, 0x9C, 0xFF, 0},
	{0x39F, 0xEA, 0xFF, 0},
	{0x993, 0x47, 0xFF, 0},
	{0x992, 0x29, 0xFF, 0},
	{0x1418, 0x55, 0xFF, 0},
	{0x1417, 0x43, 0xFF, 0},
	{0x3A2, 0x2A, 0xFF, 0},
	{0x3A1, 0x7C, 0xFF, 0},
	/* clear boot status */
	{0x12A, 0x3, 0xFF, 0},
	{0xD, 1, 0x1, 0},
	{0xD, 0, 0x1, 0},
	{0x1416, 0xF, 0xF, 0},
	/* init setting */
	{0x13, 0x2, 0x2, 0},
	{0x15, 0x1F, 0x1F, 0},
	{0x22, 0x12, 0x12, 0},
	{0x8A, 0x6, 0xF, 0},
	{0x10B, 0x3, 0x3, 0},
	{0x38B, 0x4, 0xFF, 0},
	{0xA07, 0x0, 0x1, 0},
	{0xA1A, 0x1F, 0x1F, 0},
	{0x1457, 0x0, 0xFF, 0},
	{0x997, 0x7, 0x7F, 0},
	{0x999, 0xF0, 0xF0, 0},
	{0x9A0, 0x1, 0x1F, 0},
	{0x9A1, 0x1, 0x1F, 0},
	{0x9A2, 0x0, 0x1F, 0},
	{0x9A3, 0x1, 0x1F, 0},
	{0x1440, 0x0, 0xA, 0},
	{0x1487, 0x58, 0xFF, 0},
	{0x148B, 0x1, 0x7F, 0},
	{0x148C, 0x2, 0x7F, 0},
	{0x1507, 0x58, 0xFF, 0},
	{0x150B, 0x1, 0x7F, 0},
	{0x150C, 0x2, 0x7F, 0},
	{0x1587, 0x58, 0xFF, 0},
	{0x158B, 0x1, 0x7F, 0},
	{0x158C, 0x4, 0x7F, 0},
	{0x1607, 0x58, 0xFF, 0},
	{0x160B, 0x1, 0x7F, 0},
	{0x160C, 0x2, 0x7F, 0},
	{0x1687, 0x22, 0x76, 0},
	{0x1688, 0xE, 0x2F, 0},
	{0x1689, 0xA1, 0xE1, 0},
	{0x168A, 0x79, 0x7F, 0},
	{0x168B, 0x12, 0x3F, 0},
	{0x168D, 0x0, 0xC, 0},
	{0x168E, 0xD7, 0xFF, 0},
	{0x168F, 0x81, 0xFF, 0},
	{0x1690, 0x13, 0x3F, 0},
	{0x1691, 0x22, 0x76, 0},
	{0x1692, 0xE, 0x2F, 0},
	{0x1693, 0xA1, 0xE1, 0},
	{0x1694, 0x79, 0x7F, 0},
	{0x1695, 0x12, 0x3F, 0},
	{0x1697, 0x0, 0xC, 0},
	{0x1698, 0xD7, 0xFF, 0},
	{0x1699, 0x81, 0xFF, 0},
	{0x169A, 0x13, 0x3F, 0},
	{0x169B, 0x20, 0x70, 0},
	{0x169C, 0xE, 0x2F, 0},
	{0x169D, 0x80, 0xC1, 0},
	{0x169E, 0xF8, 0xF8, 0},
	{0x169F, 0x12, 0x3F, 0},
	{0x16A1, 0x0, 0xC, 0},
	{0x16A2, 0xDB, 0xFF, 0},
	{0x16A3, 0xA1, 0xFF, 0},
	{0x16A4, 0x1, 0xF, 0},
	{0x16A5, 0x22, 0x76, 0},
	{0x16A6, 0xE, 0x2F, 0},
	{0x16A7, 0xA1, 0xE1, 0},
	{0x16A8, 0x79, 0xFF, 0},
	{0x16A9, 0x12, 0x3F, 0},
	{0x16AB, 0x0, 0xC, 0},
	{0x16AC, 0xD7, 0xFF, 0},
	{0x16AD, 0x81, 0xFF, 0},
	{0x16AE, 0x13, 0x3F, 0},
	/* enable magic key protection */
	{0x3A9, 0, 0xFF, 0},
	{0x3A8, 0, 0xFF, 0},
	{0x3A0, 0, 0xFF, 0},
	{0x39F, 0, 0xFF, 0},
	{0x993, 0, 0xFF, 0},
	{0x992, 0, 0xFF, 0},
	{0x1418, 0, 0xFF, 0},
	{0x1417, 0, 0xFF, 0},
	{0x3a2, 0, 0xFF, 0},
	{0x3a1, 0, 0xFF, 0},
};

static const struct mt6315_setting init_setting_gpu[] = {
	/* disable magic key protection */
	{0x3A9, 0x63, 0xFF, 0},
	{0x3A8, 0x15, 0xFF, 0},
	{0x3A0, 0x9C, 0xFF, 0},
	{0x39F, 0xEA, 0xFF, 0},
	{0x993, 0x47, 0xFF, 0},
	{0x992, 0x29, 0xFF, 0},
	{0x1418, 0x55, 0xFF, 0},
	{0x1417, 0x43, 0xFF, 0},
	{0x3a2, 0x2A, 0xFF, 0},
	{0x3a1, 0x7C, 0xFF, 0},
	/* init setting */
	{0x13, 0x2, 0x2, 0},
	{0x15, 0x1F, 0x1F, 0},
	{0x22, 0x12, 0x12, 0},
	{0x8A, 0x6, 0xF, 0},
	{0x10B, 0x3, 0x3, 0},
	{0x38B, 0x4, 0xFF, 0},
	{0xA07, 0x0, 0x1, 0},
	{0xA1A, 0x1F, 0x1F, 0},
	{0x1457, 0x0, 0xFF, 0},
	{0x997, 0x2F, 0x7F, 0},
	{0x999, 0xF0, 0xF0, 0},
	{0x9A0, 0x0, 0x1F, 0},
	{0x9A1, 0x0, 0x1F, 0},
	{0x9A2, 0xB, 0x1F, 0},
	{0x9A3, 0x0, 0x1F, 0},
	{0x1440, 0x0, 0xA, 0},
	{0x1487, 0x58, 0xFF, 0},
	{0x148B, 0x1, 0x7F, 0},
	{0x148C, 0x4, 0x7F, 0},
	{0x1507, 0x58, 0xFF, 0},
	{0x150B, 0x1, 0x7F, 0},
	{0x150C, 0x4, 0x7F, 0},
	{0x1587, 0x58, 0xFF, 0},
	{0x158B, 0x1, 0x7F, 0},
	{0x158C, 0x4, 0x7F, 0},
	{0x1607, 0x58, 0xFF, 0},
	{0x160B, 0x1, 0x7F, 0},
	{0x160C, 0x4, 0x7F, 0},
	{0x1687, 0x22, 0x76, 0},
	{0x1688, 0xE, 0x2F, 0},
	{0x1689, 0xA1, 0xE1, 0},
	{0x168A, 0x79, 0x7F, 0},
	{0x168B, 0x12, 0x3F, 0},
	{0x168D, 0x0, 0xC, 0},
	{0x168E, 0xD7, 0xFF, 0},
	{0x168F, 0x81, 0xFF, 0},
	{0x1690, 0x13, 0x3F, 0},
	{0x1691, 0x22, 0x76, 0},
	{0x1692, 0xE, 0x2F, 0},
	{0x1693, 0xA1, 0xE1, 0},
	{0x1694, 0x79, 0x7F, 0},
	{0x1695, 0x12, 0x3F, 0},
	{0x1697, 0x0, 0xC, 0},
	{0x1698, 0xD7, 0xFF, 0},
	{0x1699, 0x81, 0xFF, 0},
	{0x169A, 0x13, 0x3F, 0},
	{0x169B, 0x22, 0x76, 0},
	{0x169C, 0xE, 0x2F, 0},
	{0x169D, 0xA1, 0xE1, 0},
	{0x169E, 0x79, 0x7F, 0},
	{0x169F, 0x12, 0x3F, 0},
	{0x16A1, 0x0, 0xC, 0},
	{0x16A2, 0xD7, 0xFF, 0},
	{0x16A3, 0x81, 0xFF, 0},
	{0x16A4, 0x13, 0x3F, 0},
	{0x16A5, 0x22, 0x76, 0},
	{0x16A6, 0xE, 0x2F, 0},
	{0x16A7, 0xA1, 0xE1, 0},
	{0x16A8, 0x79, 0xFF, 0},
	{0x16A9, 0x12, 0x3F, 0},
	{0x16AB, 0x0, 0xC, 0},
	{0x16AC, 0xD7, 0xFF, 0},
	{0x16AD, 0x81, 0xFF, 0},
	{0x16AE, 0x13, 0x3F, 0},
	/* Don't remove this! it's MT6315 for GPU only to disable VBUCK3 */
	{0x1440, 0x0, 0x4, 0},
	/* enable magic key protection */
	{0x3A9, 0, 0xFF, 0},
	{0x3A8, 0, 0xFF, 0},
	{0x3A0, 0, 0xFF, 0},
	{0x39F, 0, 0xFF, 0},
	{0x993, 0, 0xFF, 0},
	{0x992, 0, 0xFF, 0},
	{0x1418, 0, 0xFF, 0},
	{0x1417, 0, 0xFF, 0},
	{0x3a2, 0, 0xFF, 0},
	{0x3a1, 0, 0xFF, 0},
};

static void mt6315_read(u32 slvid, u32 reg, u32 *data)
{
	pmif_arb->read(pmif_arb, slvid, reg, data);
}

static void mt6315_write(u32 slvid, u32 reg, u32 data)
{
	pmif_arb->write(pmif_arb, slvid, reg, data);
}

static void mt6315_write_field(u32 slvid, u32 reg, u32 val, u32 mask, u32 shift)
{
	pmif_arb->write_field(pmif_arb, 0, reg, val, mask, shift);
}

static void mt6315_wdt_enable(u32 slvid)
{
	mt6315_write(slvid, 0x3A9, 0x63);
	mt6315_write(slvid, 0x3A8, 0x15);
	mt6315_write(slvid, 0x127, 0x2);
	mt6315_write(slvid, 0x127, 0x1);
	mt6315_write(slvid, 0x127, 0x8);
	udelay(50);
	mt6315_write(slvid, 0x128, 0x8);
	mt6315_write(slvid, 0x3A9, 0);
	mt6315_write(slvid, 0x3A8, 0);
}

static void mt6315_init_setting(void)
{
	for (int i = 0; i < ARRAY_SIZE(init_setting_cpu); i++)
		mt6315_write_field(MT6315_CPU,
			init_setting_cpu[i].addr, init_setting_cpu[i].val,
			init_setting_cpu[i].mask, init_setting_cpu[i].shift);

	for (int i = 0; i < ARRAY_SIZE(init_setting_gpu); i++)
		mt6315_write_field(MT6315_GPU,
			init_setting_gpu[i].addr, init_setting_gpu[i].val,
			init_setting_gpu[i].mask, init_setting_gpu[i].shift);
}

void mt6315_buck_set_voltage(u32 slvid, u32 buck_id, u32 buck_uv)
{
	unsigned int vol_reg, vol_val;

	if (!pmif_arb)
		die("ERROR: pmif_arb not initialized");

	switch (buck_id) {
	case MT6315_BUCK_1:
		vol_reg = MT6315_BUCK_TOP_ELR0;
		break;
	case MT6315_BUCK_3:
		vol_reg = MT6315_BUCK_TOP_ELR3;
		break;
	default:
		die("ERROR: Unknown buck_id %u", buck_id);
		return;
	};

	vol_val = buck_uv / 6250;
	mt6315_write(slvid, vol_reg, vol_val);
}

u32 mt6315_buck_get_voltage(u32 slvid, u32 buck_id)
{
	u32 vol_reg, vol;

	if (!pmif_arb)
		die("ERROR: pmif_arb not initialized");

	switch (buck_id) {
	case MT6315_BUCK_1:
		vol_reg = MT6315_BUCK_VBUCK1_DBG0;
		break;
	case MT6315_BUCK_3:
		vol_reg = MT6315_BUCK_VBUCK1_DBG3;
		break;
	default:
		die("ERROR: Unknown buck_id %u", buck_id);
		return 0;
	};

	mt6315_read(slvid, vol_reg, &vol);
	return vol * 6250;
}

static void init_pmif_arb(void)
{
	if (!pmif_arb) {
		pmif_arb = get_pmif_controller(PMIF_SPMI, 0);
		if (!pmif_arb)
			die("ERROR: No spmi device");
	}

	if (pmif_arb->is_pmif_init_done(pmif_arb))
		die("ERROR - Failed to initialize pmif spmi");
}

void mt6315_init(void)
{
	init_pmif_arb();
	mt6315_wdt_enable(MT6315_CPU);
	mt6315_wdt_enable(MT6315_GPU);
	mt6315_init_setting();
}

void mt6315_romstage_init(void)
{
	init_pmif_arb();
}
