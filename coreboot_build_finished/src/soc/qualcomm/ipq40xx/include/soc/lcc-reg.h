/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __DRIVERS_CLOCK_IPQ40XX_LCC_REG_H__
#define __DRIVERS_CLOCK_IPQ40XX_LCC_REG_H__

#define MSM_GCC_BASE			0x00900000
#define MSM_LPASS_LCC_BASE		0x28000000

/* GCC APCS Configuration/Control */

#define GCC_PLL_APCS_REG		0x34C0

#define GCC_PLL_APCS_PLL4_MASK		0x10
#define GCC_PLL_APCS_PLL4_SHIFT		4
#define GCC_PLL_APCS_PLL4_ENABLE	(1 << GCC_PLL_APCS_PLL4_SHIFT)

/* LCC PLL0 Configuration/Control */

#define LCC_PLL0_MODE_REG		0x00
#define LCC_PLL0_L_REG			0x04
#define LCC_PLL0_M_REG			0x08
#define LCC_PLL0_N_REG			0x0C
#define LCC_PLL0_CFG_REG		0x14
#define LCC_PLL0_STAT_REG		0x18

#define LCC_PLL0_MODE_FSM_RESET_MASK	0x200000
#define LCC_PLL0_MODE_FSM_RESET_SHIFT	21
#define LCC_PLL0_MODE_FSM_RESET_ASSERT	(1 << LCC_PLL0_MODE_FSM_RESET_SHIFT)

#define LCC_PLL0_MODE_FSM_VOTE_MASK	0x100000
#define LCC_PLL0_MODE_FSM_VOTE_SHIFT	20
#define LCC_PLL0_MODE_FSM_VOTE_ENABLE	(1 << LCC_PLL0_MODE_FSM_VOTE_SHIFT)

#define LCC_PLL0_MODE_BIAS_CNT_MASK	0xFC000
#define LCC_PLL0_MODE_BIAS_CNT_SHIFT	14

#define LCC_PLL0_MODE_LOCK_CNT_MASK	0x3F00
#define LCC_PLL0_MODE_LOCK_CNT_SHIFT	8

#define LCC_PLL0_MODE_XO_SEL_MASK	0x30
#define LCC_PLL0_MODE_XO_SEL_SHIFT	4
#define LCC_PLL0_MODE_XO_SEL_PXO	(0 << LCC_PLL0_MODE_XO_SEL_SHIFT)
#define LCC_PLL0_MODE_XO_SEL_MXO	(1 << LCC_PLL0_MODE_XO_SEL_SHIFT)
#define LCC_PLL0_MODE_XO_SEL_CXO	(2 << LCC_PLL0_MODE_XO_SEL_SHIFT)

#define LCC_PLL0_MODE_TEST_MASK		0x8
#define LCC_PLL0_MODE_TEST_SHIFT	3
#define LCC_PLL0_MODE_TEST_ENABLE	(1 << LCC_PLL0_MODE_TEST_SHIFT)

#define LCC_PLL0_MODE_RESET_MASK	0x4
#define LCC_PLL0_MODE_RESET_SHIFT	2
#define LCC_PLL0_MODE_RESET_DEASSERT	(1 << LCC_PLL0_MODE_RESET_SHIFT)

#define LCC_PLL0_MODE_BYPASS_MASK	0x2
#define LCC_PLL0_MODE_BYPASS_SHIFT	1
#define LCC_PLL0_MODE_BYPASS_DISABLE	(1 << LCC_PLL0_MODE_BYPASS_SHIFT)

#define LCC_PLL0_MODE_OUTPUT_MASK	0x1
#define LCC_PLL0_MODE_OUTPUT_SHIFT	0
#define LCC_PLL0_MODE_OUTPUT_ENABLE	(1 << LCC_PLL0_MODE_OUTPUT_SHIFT)

#define LCC_PLL0_L_MASK			0x3FF
#define LCC_PLL0_L_SHIFT		0

#define LCC_PLL0_M_MASK			0x7FFFF
#define LCC_PLL0_M_SHIFT		0

#define LCC_PLL0_N_MASK			0x7FFFF
#define LCC_PLL0_N_SHIFT		0

#define LCC_PLL0_CFG_LV_MAIN_MASK	0x800000
#define LCC_PLL0_CFG_LV_MAIN_SHIFT	23
#define LCC_PLL0_CFG_LV_MAIN_ENABLE	(1 << LCC_PLL0_CFG_LV_MAIN_SHIFT)

#define LCC_PLL0_CFG_FRAC_MASK		0x400000
#define LCC_PLL0_CFG_FRAC_SHIFT		22
#define LCC_PLL0_CFG_FRAC_ENABLE	(1 << LCC_PLL0_CFG_FRAC_SHIFT)

#define LCC_PLL0_CFG_POSTDIV_MASK	0x300000
#define LCC_PLL0_CFG_POSTDIV_SHIFT	20
#define LCC_PLL0_CFG_POSTDIV_DIV1	(0 << LCC_PLL0_CFG_POSTDIV_SHIFT)
#define LCC_PLL0_CFG_POSTDIV_DIV2	(1 << LCC_PLL0_CFG_POSTDIV_SHIFT)
#define LCC_PLL0_CFG_POSTDIV_DIV4	(2 << LCC_PLL0_CFG_POSTDIV_SHIFT)

#define LCC_PLL0_CFG_PREDIV_MASK	0x80000
#define LCC_PLL0_CFG_PREDIV_SHIFT	19
#define LCC_PLL0_CFG_PREDIV_DIV1	(0 << LCC_PLL0_CFG_PREDIV_SHIFT)
#define LCC_PLL0_CFG_PREDIV_DIV2	(1 << LCC_PLL0_CFG_PREDIV_SHIFT)

#define LCC_PLL0_CFG_VCO_SEL_MASK	0x30000
#define LCC_PLL0_CFG_VCO_SEL_SHIFT	16
#define LCC_PLL0_CFG_VCO_SEL_LOW	(0 << LCC_PLL0_CFG_VCO_SEL_SHIFT)
#define LCC_PLL0_CFG_VCO_SEL_MED	(1 << LCC_PLL0_CFG_VCO_SEL_SHIFT)
#define LCC_PLL0_CFG_VCO_SEL_HIGH	(2 << LCC_PLL0_CFG_VCO_SEL_SHIFT)

#define LCC_PLL0_STAT_ACTIVE_MASK	0x10000
#define LCC_PLL0_STAT_ACTIVE_SHIFT	16
#define LCC_PLL0_STAT_ACTIVE_SET	(1 << LCC_PLL0_STAT_ACTIVE_SHIFT)

#define LCC_PLL0_STAT_NOCLK_MASK	0x1
#define LCC_PLL0_STAT_NOCLK_SHIFT	0
#define LCC_PLL0_STAT_NOCLK_SET		(1 << LCC_PLL0_STAT_NOCLK_SHIFT)

/* LCC AHBIX Configuration/Control */

#define LCC_AHBIX_NS_REG		0x38
#define LCC_AHBIX_MD_REG		0x3C
#define LCC_AHBIX_STAT_REG		0x44

#define LCC_AHBIX_NS_N_VAL_MASK		0xFF000000
#define LCC_AHBIX_NS_N_VAL_SHIFT	24

#define LCC_AHBIX_NS_CRC_MASK		0x800
#define LCC_AHBIX_NS_CRC_SHIFT		11
#define LCC_AHBIX_NS_CRC_ENABLE		(1 << LCC_AHBIX_NS_CRC_SHIFT)

#define LCC_AHBIX_NS_GFM_SEL_MASK	0x400
#define LCC_AHBIX_NS_GFM_SEL_SHIFT	10
#define LCC_AHBIX_NS_GFM_SEL_PXO	(0 << LCC_AHBIX_NS_GFM_SEL_SHIFT)
#define LCC_AHBIX_NS_GFM_SEL_MNC	(1 << LCC_AHBIX_NS_GFM_SEL_SHIFT)

#define LCC_AHBIX_NS_MNC_CLK_MASK	0x200
#define LCC_AHBIX_NS_MNC_CLK_SHIFT	9
#define LCC_AHBIX_NS_MNC_CLK_ENABLE	(1 << LCC_AHBIX_NS_MNC_CLK_SHIFT)

#define LCC_AHBIX_NS_MNC_MASK		0x100
#define LCC_AHBIX_NS_MNC_SHIFT		8
#define LCC_AHBIX_NS_MNC_ENABLE		(1 << LCC_AHBIX_NS_MNC_SHIFT)

#define LCC_AHBIX_NS_MNC_RESET_MASK	0x80
#define LCC_AHBIX_NS_MNC_RESET_SHIFT	7
#define LCC_AHBIX_NS_MNC_RESET_ASSERT	(1 << LCC_AHBIX_NS_MNC_RESET_SHIFT)

#define LCC_AHBIX_NS_MNC_MODE_MASK	0x60
#define LCC_AHBIX_NS_MNC_MODE_SHIFT	5
#define LCC_AHBIX_NS_MNC_MODE_BYPASS	(0 << LCC_AHBIX_NS_MNC_MODE_SHIFT)
#define LCC_AHBIX_NS_MNC_MODE_SWALLOW	(1 << LCC_AHBIX_NS_MNC_MODE_SHIFT)
#define LCC_AHBIX_NS_MNC_MODE_DUAL	(2 << LCC_AHBIX_NS_MNC_MODE_SHIFT)
#define LCC_AHBIX_NS_MNC_MODE_SINGLE	(3 << LCC_AHBIX_NS_MNC_MODE_SHIFT)

#define LCC_AHBIX_NS_PREDIV_MASK	0x18
#define LCC_AHBIX_NS_PREDIV_SHIFT	3
#define LCC_AHBIX_NS_PREDIV_BYPASS	(0 << LCC_AHBIX_NS_PREDIV_SHIFT)
#define LCC_AHBIX_NS_PREDIV_DIV2	(1 << LCC_AHBIX_NS_PREDIV_SHIFT)
#define LCC_AHBIX_NS_PREDIV_DIV4	(3 << LCC_AHBIX_NS_PREDIV_SHIFT)

#define LCC_AHBIX_NS_MN_SRC_MASK	0x7
#define LCC_AHBIX_NS_MN_SRC_SHIFT	0
#define LCC_AHBIX_NS_MN_SRC_PXO		(0 << LCC_AHBIX_NS_MN_SRC_SHIFT)
#define LCC_AHBIX_NS_MN_SRC_CXO		(1 << LCC_AHBIX_NS_MN_SRC_SHIFT)
#define LCC_AHBIX_NS_MN_SRC_LPA		(2 << LCC_AHBIX_NS_MN_SRC_SHIFT)
#define LCC_AHBIX_NS_MN_SRC_SEC		(3 << LCC_AHBIX_NS_MN_SRC_SHIFT)
#define LCC_AHBIX_NS_MN_SRC_CTEST	(6 << LCC_AHBIX_NS_MN_SRC_SHIFT)
#define LCC_AHBIX_NS_MN_SRC_PTEST	(7 << LCC_AHBIX_NS_MN_SRC_SHIFT)

#define LCC_AHBIX_MD_M_VAL_MASK		0xFF00
#define LCC_AHBIX_MD_M_VAL_SHIFT	8

#define LCC_AHBIX_MD_NOT_2D_VAL_MASK	0xFF
#define LCC_AHBIX_MD_NOT_2D_VAL_SHIFT	0

#define LCC_AHBIX_STAT_AHB_CLK_MASK	0x400
#define LCC_AHBIX_STAT_AHB_CLK_SHIFT	10
#define LCC_AHBIX_STAT_AHB_CLK_ON	(1 << LCC_AHBIX_STAT_AHB_CLK_SHIFT)

#define LCC_AHBIX_STAT_AIF_CLK_MASK	0x200
#define LCC_AHBIX_STAT_AIF_CLK_SHIFT	9
#define LCC_AHBIX_STAT_AIF_CLK_ON	(1 << LCC_AHBIX_STAT_AIF_CLK_SHIFT)

#define LCC_AHBIX_STAT_FAB2_CLK_MASK	0x40
#define LCC_AHBIX_STAT_FAB2_CLK_SHIFT	6
#define LCC_AHBIX_STAT_FAB2_CLK_ON	(1 << LCC_AHBIX_STAT_FAB2_CLK_SHIFT)

#define LCC_AHBIX_STAT_2FAB_CLK_MASK	0x20
#define LCC_AHBIX_STAT_2FAB_CLK_SHIFT	5
#define LCC_AHBIX_STAT_2FAB_CLK_ON	(1 << LCC_AHBIX_STAT_2FAB_CLK_SHIFT)

/* LCC MI2S Configuration/Control */

#define LCC_MI2S_NS_REG			0x48
#define LCC_MI2S_MD_REG			0x4C
#define LCC_MI2S_STAT_REG		0x50

#define LCC_MI2S_NS_N_VAL_MASK		0xFF000000
#define LCC_MI2S_NS_N_VAL_SHIFT		24

#define LCC_MI2S_NS_RESET_MASK		0x80000
#define LCC_MI2S_NS_RESET_SHIFT		19
#define LCC_MI2S_NS_RESET_ASSERT	(1 << LCC_MI2S_NS_RESET_SHIFT)

#define LCC_MI2S_NS_OSR_INV_MASK	0x40000
#define LCC_MI2S_NS_OSR_INV_SHIFT	18
#define LCC_MI2S_NS_OSR_INV_ENABLE	(1 << LCC_MI2S_NS_OSR_INV_SHIFT)

#define LCC_MI2S_NS_OSR_CXC_MASK	0x20000
#define LCC_MI2S_NS_OSR_CXC_SHIFT	17
#define LCC_MI2S_NS_OSR_CXC_ENABLE	(1 << LCC_MI2S_NS_OSR_CXC_SHIFT)

#define LCC_MI2S_NS_BIT_INV_MASK	0x10000
#define LCC_MI2S_NS_BIT_INV_SHIFT	16
#define LCC_MI2S_NS_BIT_INV_ENABLE	(1 << LCC_MI2S_NS_BIT_INV_SHIFT)

#define LCC_MI2S_NS_BIT_CXC_MASK	0x8000
#define LCC_MI2S_NS_BIT_CXC_SHIFT	15
#define LCC_MI2S_NS_BIT_CXC_ENABLE	(1 << LCC_MI2S_NS_BIT_CXC_SHIFT)

#define LCC_MI2S_NS_BIT_SRC_MASK	0x4000
#define LCC_MI2S_NS_BIT_SRC_SHIFT	14
#define LCC_MI2S_NS_BIT_SRC_MASTER	(0 << LCC_MI2S_NS_BIT_SRC_SHIFT)
#define LCC_MI2S_NS_BIT_SRC_SLAVE	(1 << LCC_MI2S_NS_BIT_SRC_SHIFT)

#define LCC_MI2S_NS_BIT_DIV_MASK	0x3C00
#define LCC_MI2S_NS_BIT_DIV_SHIFT	10
#define LCC_MI2S_NS_BIT_DIV_BYPASS	(0  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV2	(1  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV3	(2  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV4	(3  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV5	(4  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV6	(5  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV7	(6  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV8	(7  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV9	(8  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV10	(9  << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV11	(10 << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV12	(11 << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV13	(12 << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV14	(13 << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV15	(14 << LCC_MI2S_NS_BIT_DIV_SHIFT)
#define LCC_MI2S_NS_BIT_DIV_DIV16	(15 << LCC_MI2S_NS_BIT_DIV_SHIFT)

#define LCC_MI2S_NS_MNC_CLK_MASK	0x200
#define LCC_MI2S_NS_MNC_CLK_SHIFT	9
#define LCC_MI2S_NS_MNC_CLK_ENABLE	(1 << LCC_MI2S_NS_MNC_CLK_SHIFT)

#define LCC_MI2S_NS_MNC_MASK		0x100
#define LCC_MI2S_NS_MNC_SHIFT		8
#define LCC_MI2S_NS_MNC_ENABLE		(1 << LCC_MI2S_NS_MNC_SHIFT)

#define LCC_MI2S_NS_MNC_RESET_MASK	0x80
#define LCC_MI2S_NS_MNC_RESET_SHIFT	7
#define LCC_MI2S_NS_MNC_RESET_ASSERT	(1 << LCC_MI2S_NS_MNC_RESET_SHIFT)

#define LCC_MI2S_NS_MNC_MODE_MASK	0x60
#define LCC_MI2S_NS_MNC_MODE_SHIFT	5
#define LCC_MI2S_NS_MNC_MODE_BYPASS	(0 << LCC_MI2S_NS_MNC_MODE_SHIFT)
#define LCC_MI2S_NS_MNC_MODE_SWALLOW	(1 << LCC_MI2S_NS_MNC_MODE_SHIFT)
#define LCC_MI2S_NS_MNC_MODE_DUAL	(2 << LCC_MI2S_NS_MNC_MODE_SHIFT)
#define LCC_MI2S_NS_MNC_MODE_SINGLE	(3 << LCC_MI2S_NS_MNC_MODE_SHIFT)

#define LCC_MI2S_NS_PREDIV_MASK		0x18
#define LCC_MI2S_NS_PREDIV_SHIFT	3
#define LCC_MI2S_NS_PREDIV_BYPASS	(0 << LCC_MI2S_NS_PREDIV_SHIFT)
#define LCC_MI2S_NS_PREDIV_DIV2		(1 << LCC_MI2S_NS_PREDIV_SHIFT)
#define LCC_MI2S_NS_PREDIV_DIV4		(3 << LCC_MI2S_NS_PREDIV_SHIFT)

#define LCC_MI2S_NS_MN_SRC_MASK		0x7
#define LCC_MI2S_NS_MN_SRC_SHIFT	0
#define LCC_MI2S_NS_MN_SRC_PXO		(0 << LCC_MI2S_NS_MN_SRC_SHIFT)
#define LCC_MI2S_NS_MN_SRC_CXO		(1 << LCC_MI2S_NS_MN_SRC_SHIFT)
#define LCC_MI2S_NS_MN_SRC_LPA		(2 << LCC_MI2S_NS_MN_SRC_SHIFT)
#define LCC_MI2S_NS_MN_SRC_SEC		(3 << LCC_MI2S_NS_MN_SRC_SHIFT)
#define LCC_MI2S_NS_MN_SRC_CTEST	(6 << LCC_MI2S_NS_MN_SRC_SHIFT)
#define LCC_MI2S_NS_MN_SRC_PTEST	(7 << LCC_MI2S_NS_MN_SRC_SHIFT)

#define LCC_MI2S_MD_M_VAL_MASK		0xFF00
#define LCC_MI2S_MD_M_VAL_SHIFT		8

#define LCC_MI2S_MD_NOT_2D_VAL_MASK	0xFF
#define LCC_MI2S_MD_NOT_2D_VAL_SHIFT	0

#define LCC_MI2S_STAT_OSR_CLK_MASK	0x2
#define LCC_MI2S_STAT_OSR_CLK_SHIFT	1
#define LCC_MI2S_STAT_OSR_CLK_ON	(1 << LCC_MI2S_STAT_OSR_CLK_SHIFT)

#define LCC_MI2S_STAT_BIT_CLK_MASK	0x1
#define LCC_MI2S_STAT_BIT_CLK_SHIFT	0
#define LCC_MI2S_STAT_BIT_CLK_ON	(1 << LCC_MI2S_STAT_BIT_CLK_SHIFT)

/* LCC PLL Configuration/Control */

#define LCC_PLL_PCLK_REG		0xC4
#define LCC_PLL_SCLK_REG		0xC8

#define LCC_PLL_PCLK_RESET_MASK		0x2
#define LCC_PLL_PCLK_RESET_SHIFT	1
#define LCC_PLL_PCLK_RESET_ASSERT	(1 << LCC_PLL_PCLK_RESET_SHIFT)

#define LCC_PLL_PCLK_SRC_MASK		0x1
#define LCC_PLL_PCLK_SRC_SHIFT		0
#define LCC_PLL_PCLK_SRC_PXO		(0 << LCC_PLL_PCLK_SRC_SHIFT)
#define LCC_PLL_PCLK_SRC_PRI		(1 << LCC_PLL_PCLK_SRC_SHIFT)

#define LCC_PLL_SCLK_RESET_MASK		0x10
#define LCC_PLL_SCLK_RESET_SHIFT	4
#define LCC_PLL_SCLK_RESET_ASSERT	(1 << LCC_PLL_SCLK_RESET_SHIFT)

#define LCC_PLL_SCLK_DIV_MASK		0xC
#define LCC_PLL_SCLK_DIV_SHIFT		2
#define LCC_PLL_SCLK_DIV_BYPASS		(0 << LCC_PLL_SCLK_DIV_SHIFT)
#define LCC_PLL_SCLK_DIV_DIV2		(1 << LCC_PLL_SCLK_DIV_SHIFT)
#define LCC_PLL_SCLK_DIV_DIV3		(2 << LCC_PLL_SCLK_DIV_SHIFT)
#define LCC_PLL_SCLK_DIV_DIV4		(3 << LCC_PLL_SCLK_DIV_SHIFT)

#define LCC_PLL_SCLK_XO_MASK		0x2
#define LCC_PLL_SCLK_XO_SHIFT		1
#define LCC_PLL_SCLK_XO_PXO		(0 << LCC_PLL_SCLK_XO_SHIFT)
#define LCC_PLL_SCLK_XO_SEC		(1 << LCC_PLL_SCLK_XO_SHIFT)

#define LCC_PLL_SCLK_MUX_MASK		0x1
#define LCC_PLL_SCLK_MUX_SHIFT		0
#define LCC_PLL_SCLK_MUX_PLL1		(0 << LCC_PLL_SCLK_MUX_SHIFT)
#define LCC_PLL_SCLK_MUX_PLL0		(1 << LCC_PLL_SCLK_MUX_SHIFT)

#endif /* __DRIVERS_CLOCK_IPQ40XX_LCC_REG_H__ */
