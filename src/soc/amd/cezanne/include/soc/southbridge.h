/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef AMD_CEZANNE_SOUTHBRIDGE_H
#define AMD_CEZANNE_SOUTHBRIDGE_H

#include <soc/iomap.h>

/* Power management registers:  0xfed80300 or index/data at IO 0xcd6/cd7 */
#define PM_PCI_CTRL			0x08
#define   FORCE_SLPSTATE_RETRY		BIT(25)
#define PWR_RESET_CFG			0x10
#define   TOGGLE_ALL_PWR_GOOD		(1 << 1)
#define PM_SERIRQ_CONF			0x54
#define   PM_SERIRQ_NUM_BITS_17		0x0000
#define   PM_SERIRQ_NUM_BITS_18		0x0004
#define   PM_SERIRQ_NUM_BITS_19		0x0008
#define   PM_SERIRQ_NUM_BITS_20		0x000c
#define   PM_SERIRQ_NUM_BITS_21		0x0010
#define   PM_SERIRQ_NUM_BITS_22		0x0014
#define   PM_SERIRQ_NUM_BITS_23		0x0018
#define   PM_SERIRQ_NUM_BITS_24		0x001c
#define   PM_SERIRQ_MODE		BIT(6)
#define   PM_SERIRQ_ENABLE		BIT(7)
#define PM_EVT_BLK			0x60
#define   WAK_STS			BIT(15) /*AcpiPmEvtBlkx00 Pm1Status */
#define   PCIEXPWAK_STS			BIT(14)
#define   RTC_STS			BIT(10)
#define   PWRBTN_STS			BIT(8)
#define   GBL_STS			BIT(5)
#define   BM_STS			BIT(4)
#define   TIMER_STS			BIT(0)
#define   PCIEXPWAK_DIS			BIT(14) /*AcpiPmEvtBlkx02 Pm1Enable */
#define   RTC_EN			BIT(10)
#define   PWRBTN_EN			BIT(8)
#define   GBL_EN			BIT(5)
#define   TIMER_STS			BIT(0)
#define PM1_CNT_BLK			0x62
#define PM_TMR_BLK			0x64
#define PM_GPE0_BLK			0x68
#define PM_ACPI_SMI_CMD			0x6a
#define PM_ACPI_CONF			0x74
#define   PM_ACPI_DECODE_STD		BIT(0)
#define   PM_ACPI_GLOBAL_EN		BIT(1)
#define   PM_ACPI_RTC_EN_EN		BIT(2)
#define   PM_ACPI_TIMER_EN_EN		BIT(4)
#define   PM_ACPI_MASK_ARB_DIS		BIT(6)
#define   PM_ACPI_BIOS_RLS		BIT(7)
#define   PM_ACPI_PWRBTNEN_EN		BIT(8)
#define   PM_ACPI_REDUCED_HW_EN		BIT(9)
#define   PM_ACPI_BLOCK_PCIE_PME	BIT(24)
#define   PM_ACPI_PCIE_WAK_MASK		BIT(25)
#define   PM_ACPI_WAKE_AS_GEVENT	BIT(27)
#define   PM_ACPI_NB_PME_GEVENT		BIT(28)
#define   PM_ACPI_RTC_WAKE_EN		BIT(29)
#define PM_RST_CTRL1			0xbe
#define   SLPTYPE_CONTROL_EN		BIT(5)
#define PM_LPC_GATING			0xec
#define   PM_LPC_AB_NO_BYPASS_EN	BIT(2)
#define   PM_LPC_A20_EN			BIT(1)
#define   PM_LPC_ENABLE			BIT(0)

#define PM1_LIMIT			16
#define GPE0_LIMIT			32
#define TOTAL_BITS(a)			(8 * sizeof(a))

#define FCH_LEGACY_UART_DECODE		(ALINK_AHB_ADDRESS + 0x20) /* 0xfedc0020 */

/* FCH AOAC device offsets for AOAC_DEV_D3_CTL/AOAC_DEV_D3_STATE */
#define FCH_AOAC_DEV_CLK_GEN		0
#define FCH_AOAC_DEV_I2C0		5
#define FCH_AOAC_DEV_I2C1		6
#define FCH_AOAC_DEV_I2C2		7
#define FCH_AOAC_DEV_I2C3		8
#define FCH_AOAC_DEV_I2C4		9
#define FCH_AOAC_DEV_I2C5		10
#define FCH_AOAC_DEV_UART0		11
#define FCH_AOAC_DEV_UART1		12
#define FCH_AOAC_DEV_AMBA		17
#define FCH_AOAC_DEV_ESPI		27

/* IO 0xf0 NCP Error */
#define   NCP_WARM_BOOT			(1 << 7) /* Write-once */

void fch_pre_init(void);
void fch_early_init(void);
void fch_init(void *chip_info);
void fch_final(void *chip_info);

void enable_aoac_devices(void);
void wait_for_aoac_enabled(unsigned int dev);

#endif /* AMD_CEZANNE_SOUTHBRIDGE_H */
