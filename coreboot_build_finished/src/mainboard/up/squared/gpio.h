/* SPDX-License-Identifier: GPL-2.0-only */

#include <soc/gpio.h>

#ifndef CFG_GPIO_H
#define CFG_GPIO_H

/*
 * Pad configuration was generated automatically using intelp2m utility.
 *
 * todo: check HOSTSW_OWN_{NORTH, NORTHWEST, SOUTHWEST, WEST} to set DRIVER
 * mode for the corresponding pads.
 */
static const struct pad_config gpio_table[] = {
	/*  ------- GPIO Group North ------- */

	/* GPIO_0 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_0, NONE, PWROK, OFF, ACPI),

	/* GPIO_1 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_1, NONE, PWROK, OFF, ACPI),

	/* GPIO_2 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_2, NONE, PWROK, OFF, ACPI),

	/* GPIO_3 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_3, NONE, PWROK, OFF, ACPI),

	/* GPIO_4 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_4, NONE, PWROK, OFF, ACPI),

	/* GPIO_5 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_5, NONE, DEEP, OFF, ACPI),

	/* GPIO_6 - *GPIO */
	PAD_CFG_GPO(GPIO_6, 1, DEEP),

	/* GPIO_7 - *GPIO */
	PAD_CFG_GPO(GPIO_7, 1, DEEP),

	/* GPIO_8 - *GPIO */
	PAD_CFG_GPO(GPIO_8, 1, DEEP),

	/* GPIO_9 - *GPIO */
	PAD_CFG_GPO(GPIO_9, 1, DEEP),

	/* GPIO_10 - *GPIO */
	PAD_CFG_GPO(GPIO_10, 1, DEEP),

	/* GPIO_11 - *GPIO */
	PAD_CFG_GPO(GPIO_11, 1, DEEP),

	/* GPIO_12 - *GPIO */
	PAD_CFG_GPO(GPIO_12, 1, DEEP),

	/* GPIO_13 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_13, NONE, DEEP, OFF, ACPI),

	/* GPIO_14 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_14, NONE, DEEP, OFF, ACPI),

	/* GPIO_15 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_15, NONE, DEEP, OFF, ACPI),

	/* GPIO_16 - *GPIO */
	PAD_CFG_GPI_SCI_IOS(GPIO_16, NONE, DEEP, LEVEL, INVERT, TxDRxE, SAME),

	/* GPIO_17 - *GPIO */
	PAD_CFG_GPO(GPIO_17, 1, DEEP),

	/* GPIO_18 - *GPIO */
	PAD_CFG_GPO(GPIO_18, 1, DEEP),

	/* GPIO_19 - *GPIO */
	PAD_CFG_TERM_GPO(GPIO_19, 1, UP_20K, DEEP),

	/* GPIO_20 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_20, NONE, DEEP, OFF, ACPI),

	/* GPIO_21 - *GPIO */
	PAD_CFG_GPO(GPIO_21, 1, DEEP),

	/* GPIO_22 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_22, NONE, DEEP, OFF, ACPI),

	/* GPIO_23 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_23, NONE, DEEP, OFF, ACPI),

	/* GPIO_24 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_24, NONE, DEEP, OFF, ACPI),

	/* GPIO_25 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_25, NONE, DEEP, OFF, ACPI),

	/* GPIO_26 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_26, NONE, DEEP, OFF, ACPI),

	/* GPIO_27 - *GPIO */
	PAD_CFG_GPO(GPIO_27, 1, DEEP),

	/* GPIO_28 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_28, UP_20K, DEEP, OFF, ACPI),

	/* GPIO_29 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_29, UP_20K, DEEP, OFF, ACPI),

	/* GPIO_30 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_30, UP_20K, DEEP, OFF, ACPI),

	/* GPIO_31 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_31, UP_20K, DEEP, OFF, ACPI),

	/* GPIO_32 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_32, NONE, DEEP, OFF, ACPI),

	/* GPIO_33 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_33, NONE, DEEP, OFF, ACPI),

	/* GPIO_34 - PWM0 */
	PAD_CFG_NF(GPIO_34, DN_20K, DEEP, NF1),

	/* GPIO_35 - PWM1 */
	PAD_CFG_NF(GPIO_35, DN_20K, DEEP, NF1),

	/* GPIO_36 - *GPIO */
	PAD_CFG_GPO(GPIO_36, 1, DEEP),

	/* GPIO_37 - PWM3 */
	PAD_CFG_NF(GPIO_37, DN_20K, PWROK, NF1),

	/* GPIO_38 - LPSS_UART0_RXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_38, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_39 - LPSS_UART0_TXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_39, UP_20K, DEEP, NF1, TxLASTRxE, DISPUPD),

	/* GPIO_40 - LPSS_UART0_RTS_N */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_40, UP_20K, DEEP, NF1, TxLASTRxE, DISPUPD),

	/* GPIO_41 - LPSS_UART0_CTS_N */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_41, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_42 - LPSS_UART1_RXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_42, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_43 - LPSS_UART1_TXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_43, UP_20K, DEEP, NF1, HIZCRx0, DISPUPD),

	/* GPIO_44 - LPSS_UART1_RTS_N */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_44, UP_20K, DEEP, NF1, TxLASTRxE, DISPUPD),

	/* GPIO_45 - LPSS_UART1_CTS_N */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_45, NONE, DEEP, NF1, HIZCRx0, DISPUPD),

	/* GPIO_46 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_46, NONE, DEEP, OFF, ACPI),

	/* GPIO_47 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_47, NONE, DEEP, OFF, ACPI),

	/* GPIO_48 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_48, NONE, DEEP, OFF, ACPI),

	/* GPIO_49 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_49, NONE, DEEP, OFF, ACPI),

	/* GPIO_62 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_62, NONE, DEEP, OFF, ACPI),

	/* GPIO_63 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_63, NONE, DEEP, OFF, ACPI),

	/* GPIO_64 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_64, NONE, DEEP, OFF, ACPI),

	/* GPIO_65 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_65, NONE, DEEP, OFF, ACPI),

	/* GPIO_66 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_66, NONE, DEEP, OFF, ACPI),

	/* GPIO_67 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_67, NONE, DEEP, OFF, ACPI),

	/* GPIO_68 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_68, NONE, DEEP, OFF, ACPI),

	/* GPIO_69 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_69, NONE, DEEP, OFF, ACPI),

	/* GPIO_70 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_70, NONE, DEEP, OFF, ACPI),

	/* GPIO_71 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_71, NONE, DEEP, OFF, ACPI),

	/* GPIO_72 - *GPIO */
	PAD_CFG_TERM_GPO(GPIO_72, 0, DN_20K, DEEP),

	/* GPIO_73 - *GPIO */
	PAD_CFG_TERM_GPO(GPIO_73, 0, DN_20K, DEEP),

	/* TCK - *JTAG_TCK */
	PAD_CFG_NF_IOSTANDBY_IGNORE(TCK, DN_20K, DEEP, NF1),

	/* TRST_B - *JTAG_TRST_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(TRST_B, DN_20K, DEEP, NF1),

	/* TMS - *JTAG_TMS */
	PAD_CFG_NF_IOSTANDBY_IGNORE(TMS, UP_20K, DEEP, NF1),

	/* TDI - *JTAG_TDI */
	PAD_CFG_NF_IOSTANDBY_IGNORE(TDI, UP_20K, DEEP, NF1),

	/* CX_PMODE - *JTAG_PMODE */
	PAD_CFG_NF_IOSTANDBY_IGNORE(CX_PMODE, NONE, DEEP, NF1),

	/* CX_PREQ_B - *JTAG_PREQ_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(CX_PREQ_B, UP_20K, DEEP, NF1),

	/* JTAGX - *JTAGX */
	PAD_CFG_NF_IOSTANDBY_IGNORE(JTAGX, UP_20K, DEEP, NF1),

	/* CX_PRDY_B - *JTAG_PRDY_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(CX_PRDY_B, UP_20K, DEEP, NF1),

	/* TDO - *JTAG_TDO */
	PAD_CFG_NF_IOSTANDBY_IGNORE(TDO, UP_20K, DEEP, NF1),

	/* CNV_BRI_DT - GPIO */
	PAD_CFG_GPO_IOSSTATE_IOSTERM(CNV_BRI_DT, 1, DEEP, DN_20K, IGNORE, SAME),

	/* CNV_BRI_RSP - GPIO */
	PAD_CFG_TERM_GPO(CNV_BRI_RSP, 1, UP_1K, DEEP),

	/* CNV_RGI_DT - GPIO */
	PAD_CFG_GPO(CNV_RGI_DT, 1, DEEP),

	/* CNV_RGI_RSP - RESERVED */

	/* SVID0_ALERT_B - GPIO */
	PAD_CFG_GPI_TRIG_OWN(SVID0_ALERT_B, NONE, DEEP, OFF, ACPI),

	/* SVID0_DATA - GPIO */
	PAD_CFG_GPI_TRIG_OWN(SVID0_DATA, NONE, DEEP, OFF, ACPI),

	/* SVID0_CLK - GPIO */
	PAD_CFG_GPI_TRIG_OWN(SVID0_CLK, NONE, DEEP, OFF, ACPI),

	/*  ------- GPIO Group North-West ------- */

	/* GPIO_187 - *DDI0_DDC_SDA */
	PAD_CFG_NF_IOSSTATE(GPIO_187, UP_20K, DEEP, NF1, HIZCRx0),

	/* GPIO_188 - *DDI0_DDC_SCL */
	PAD_CFG_NF_IOSSTATE(GPIO_188, UP_20K, DEEP, NF1, HIZCRx0),

	/* GPIO_189 - *DDI1_DDC_SDA */
	PAD_CFG_NF(GPIO_189, UP_2K, DEEP, NF1),

	/* GPIO_190 - *DDI1_DDC_SCL */
	PAD_CFG_NF(GPIO_190, UP_2K, DEEP, NF1),

	/* GPIO_191 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_191, NONE, DEEP, OFF, ACPI),

	/* GPIO_192 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_192, NONE, DEEP, OFF, ACPI),

	/* GPIO_193 - *PNL0_VDDEN */
	PAD_CFG_NF_IOSSTATE(GPIO_193, DN_20K, DEEP, NF1, Tx0RxDCRx0),

	/* GPIO_194 - *PNL0_BKLTEN */
	PAD_CFG_NF_IOSSTATE(GPIO_194, DN_20K, DEEP, NF1, Tx0RxDCRx0),

	/* GPIO_195 - *PNL0_BKLTCTL */
	PAD_CFG_NF_IOSSTATE(GPIO_195, DN_20K, DEEP, NF1, Tx0RxDCRx0),

	/* GPIO_196 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_196, NONE, DEEP, OFF, ACPI),

	/* GPIO_197 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_197, NONE, DEEP, OFF, ACPI),

	/* GPIO_198 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_198, NONE, DEEP, OFF, ACPI),

	/* GPIO_199 - DDI1_HPD */
	PAD_CFG_NF(GPIO_199, UP_20K, DEEP, NF2),

	/* GPIO_200 - DDI0_HPD */
	PAD_CFG_NF(GPIO_200, UP_20K, DEEP, NF2),

	/* GPIO_201 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_201, NONE, DEEP, OFF, ACPI),

	/* GPIO_202 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_202, NONE, DEEP, OFF, ACPI),

	/* GPIO_203 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_203, NONE, DEEP, OFF, ACPI),

	/* GPIO_204 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_204, NONE, DEEP, OFF, ACPI),

	/* PMC_SPI_FS0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(PMC_SPI_FS0, NONE, DEEP, OFF, ACPI),

	/* PMC_SPI_FS1 - DDI2_HPD */
	PAD_CFG_NF(PMC_SPI_FS1, UP_20K, DEEP, NF2),

	/* PMC_SPI_FS2 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(PMC_SPI_FS2, NONE, DEEP, OFF, ACPI),

	/* PMC_SPI_RXD - GPIO */
	PAD_CFG_GPI_TRIG_OWN(PMC_SPI_RXD, NONE, DEEP, OFF, ACPI),

	/* PMC_SPI_TXD - GPIO */
	PAD_CFG_GPI_TRIG_OWN(PMC_SPI_TXD, NONE, DEEP, OFF, ACPI),

	/* PMC_SPI_CLK - GPIO */
	PAD_CFG_GPI_TRIG_OWN(PMC_SPI_CLK, NONE, DEEP, OFF, ACPI),

	/* PMIC_PWRGOOD - GPIO */
	PAD_CFG_TERM_GPO(PMIC_PWRGOOD, 1, UP_1K, DEEP),

	/* PMIC_RESET_B - GPIO */
	PAD_CFG_GPI_TRIG_IOSSTATE_OWN(PMIC_RESET_B, NONE, DEEP, OFF, IGNORE, ACPI),

	/* GPIO_213 - GPIO */
	PAD_CFG_TERM_GPO(GPIO_213, 1, UP_20K, DEEP),

	/* GPIO_214 - GPIO */
	PAD_CFG_GPI_TRIG_IOS_OWN(GPIO_214, UP_20K, DEEP, OFF, TxLASTRxE, ENPU, ACPI),

	/* GPIO_215 - GPIO */
	PAD_CFG_GPI_TRIG_IOS_OWN(GPIO_215, UP_20K, DEEP, OFF, TxLASTRxE, ENPU, ACPI),

	/* PMIC_THERMTRIP_B - *THERMTRIP_N */
	PAD_CFG_NF(PMIC_THERMTRIP_B, UP_20K, DEEP, NF1),

	/* PMIC_STDBY - GPIO */
	PAD_CFG_TERM_GPO(PMIC_STDBY, 1, DN_20K, DEEP),

	/* PROCHOT_B - *PROCHOT_N */
	PAD_CFG_NF_IOSSTATE(PROCHOT_B, UP_20K, DEEP, NF1, HIZCRx1),

	/* PMIC_I2C_SCL - RESERVED */

	/* PMIC_I2C_SDA - RESERVED */

	/* GPIO_74 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_74, NONE, DEEP, OFF, ACPI),

	/* GPIO_75 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_75, NONE, DEEP, OFF, ACPI),

	/* GPIO_76 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_76, NONE, DEEP, OFF, ACPI),

	/* GPIO_77 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_77, NONE, DEEP, OFF, ACPI),

	/* GPIO_78 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_78, NONE, DEEP, OFF, ACPI),

	/* GPIO_79 - AVS_DMIC_CLK_A1 */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_79, DN_20K, DEEP, NF1),

	/* GPIO_80 - AVS_DMIC_CLK_B1 */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_80, DN_20K, DEEP, NF1),

	/* GPIO_81 - AVS_DMIC_DATA_1 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_81, DN_20K, DEEP, NF1, TxDRxE, ENPD),

	/* GPIO_82 - AVS_DMIC_CLK_AB2 */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_82, DN_20K, DEEP, NF1),

	/* GPIO_83 - AVS_DMIC_DATA_2 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_83, DN_20K, DEEP, NF1, TxDRxE, ENPD),

	/* GPIO_84 - AVS_I2S2_MCLK */
	PAD_CFG_NF(GPIO_84, DN_20K, DEEP, NF1),

	/* GPIO_85 - AVS_I2S2_BCLK */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_85, DN_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_86 - AVS_I2S2_WS_SYNC */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_86, DN_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_87 - AVS_I2S2_SDI */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_87, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_88 - AVS_I2S2_SDO */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_88, NONE, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_89 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_89, NONE, DEEP, OFF, ACPI),

	/* GPIO_90 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_90, NONE, DEEP, OFF, ACPI),

	/* GPIO_91 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_91, NONE, DEEP, OFF, ACPI),

	/* GPIO_92 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_92, NONE, DEEP, OFF, ACPI),

	/* GPIO_97 - *FST_SPI_CS0_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_97, NATIVE, DEEP, NF1),

	/* GPIO_98 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_98, NONE, DEEP, OFF, ACPI),

	/* GPIO_99 - *FST_SPI_MOSI_IO0 */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_99, NATIVE, DEEP, NF1),

	/* GPIO_100 - *FST_SPI_MISO_IO1 */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_100, NATIVE, DEEP, NF1),

	/* GPIO_101 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_101, NONE, DEEP, OFF, ACPI),

	/* GPIO_102 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_102, NONE, DEEP, OFF, ACPI),

	/* GPIO_103 - *FST_SPI_CLK */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_103, NATIVE, DEEP, NF1),

	/* FST_SPI_CLK_FB - *n/a */
	PAD_CFG_NF_IOSTANDBY_IGNORE(FST_SPI_CLK_FB, NONE, DEEP, NF1),

	/* GPIO_104 - SIO_SPI_0_CLK */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_104, DN_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_105 - SIO_SPI_0_FS0 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_105, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_106 - SIO_SPI_0_FS1 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_106, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_109 - SIO_SPI_0_RXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_109, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_110 - SIO_SPI_0_TXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_110, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_111 - SIO_SPI_1_CLK */
	PAD_CFG_NF(GPIO_111, DN_20K, DEEP, NF1),

	/* GPIO_112 - SIO_SPI_1_FS0 */
	PAD_CFG_NF(GPIO_112, DN_20K, DEEP, NF1),

	/* GPIO_113 - SIO_SPI_1_FS1 */
	PAD_CFG_NF(GPIO_113, DN_20K, DEEP, NF1),

	/* GPIO_116 - SIO_SPI_1_RXD */
	PAD_CFG_NF_IOSSTATE(GPIO_116, DN_20K, DEEP, NF1, HIZCRx0),

	/* GPIO_117 - SIO_SPI_1_TXD */
	PAD_CFG_NF(GPIO_117, DN_20K, DEEP, NF1),

	/* GPIO_118 - SIO_SPI_2_CLK */
	PAD_CFG_NF(GPIO_118, DN_20K, DEEP, NF1),

	/* GPIO_119 - SIO_SPI_2_FS0 */
	PAD_CFG_NF(GPIO_119, DN_20K, DEEP, NF1),

	/* GPIO_120 - SIO_SPI_2_FS1 */
	PAD_CFG_NF(GPIO_120, DN_20K, DEEP, NF1),

	/* GPIO_121 - SIO_SPI_2_FS2 */
	PAD_CFG_NF(GPIO_121, DN_20K, DEEP, NF1),

	/* GPIO_122 - SIO_SPI_2_RXD */
	PAD_CFG_NF(GPIO_122, DN_20K, DEEP, NF1),

	/* GPIO_123 - SIO_SPI_2_TXD */
	PAD_CFG_NF(GPIO_123, DN_20K, DEEP, NF1),

	/*  ------- GPIO Group West ------- */

	/* GPIO_124 - LPSS_I2C0_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_124, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_125 - LPSS_I2C0_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_125, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_126 - LPSS_I2C1_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_126, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_127 - LPSS_I2C1_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_127, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_128 - LPSS_I2C2_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_128, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_129 - LPSS_I2C2_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_129, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_130 - LPSS_I2C3_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_130, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_131 - LPSS_I2C3_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_131, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_132 - LPSS_I2C4_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_132, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_133 - LPSS_I2C4_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_133, UP_1K, DEEP, NF1, Tx1RxDCRx1, ENPU),

	/* GPIO_134 - LPSS_I2C5_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_134, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_135 - LPSS_I2C5_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_135, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_136 - LPSS_I2C6_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_136, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_137 - LPSS_I2C6_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_137, UP_20K, DEEP, NF1, HIZCRx0, ENPD),

	/* GPIO_138 - LPSS_I2C7_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_138, UP_1K, DEEP, NF1, Tx0RxDCRx0, ENPU),

	/* GPIO_139 - LPSS_I2C7_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_139, UP_1K, DEEP, NF1, Tx0RxDCRx0, ENPU),

	/* GPIO_146 - AVS_I2S6_BCLK */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_146, DN_20K, DEEP, NF2),

	/* GPIO_147 - AVS_I2S6_WS_SYNC */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_147, DN_20K, DEEP, NF2),

	/* GPIO_148 - AVS_I2S6_SDI */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_148, DN_20K, DEEP, NF2),

	/* GPIO_149 - AVS_I2S6_SDO */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_149, DN_20K, DEEP, NF2),

	/* GPIO_150 - AVS_I2S5_BCLK */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_150, DN_20K, DEEP, NF2, HIZCRx0, ENPD),

	/* GPIO_151 - AVS_I2S5_WS_SYNC */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_151, DN_20K, DEEP, NF2, HIZCRx0, ENPD),

	/* GPIO_152 - AVS_I2S5_SDI */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_152, DN_20K, DEEP, NF2, HIZCRx0, ENPD),

	/* GPIO_153 - AVS_I2S5_SDO */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_153, NONE, DEEP, NF2, HIZCRx0, ENPD),

	/* GPIO_154 - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPIO_154, NONE, DEEP, OFF, ACPI),

	/* GPIO_155 - SPKR */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPIO_155, DN_20K, DEEP, NF2),

	/* GPIO_209 - *PCIE_CLKREQ0_N */
	PAD_CFG_NF(GPIO_209, DN_20K, DEEP, NF1),

	/* GPIO_210 - *PCIE_CLKREQ1_N */
	PAD_CFG_NF(GPIO_210, DN_20K, DEEP, NF1),

	/* GPIO_211 - *PCIE_CLKREQ2_N */
	PAD_CFG_NF(GPIO_211, DN_20K, DEEP, NF1),

	/* GPIO_212 - *PCIE_CLKREQ3_N */
	PAD_CFG_NF(GPIO_212, DN_20K, DEEP, NF1),

	/* OSC_CLK_OUT_0 - *OSC_CLK_OUT_0 */
	PAD_CFG_NF(OSC_CLK_OUT_0, DN_20K, DEEP, NF1),

	/* OSC_CLK_OUT_1 - *OSC_CLK_OUT_1 */
	PAD_CFG_NF(OSC_CLK_OUT_1, DN_20K, DEEP, NF1),

	/* OSC_CLK_OUT_2 - *OSC_CLK_OUT_2 */
	PAD_CFG_NF(OSC_CLK_OUT_2, DN_20K, DEEP, NF1),

	/* OSC_CLK_OUT_3 - *OSC_CLK_OUT_3 */
	PAD_CFG_NF(OSC_CLK_OUT_3, DN_20K, DEEP, NF1),

	/* OSC_CLK_OUT_4 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(OSC_CLK_OUT_4, NONE, DEEP, OFF, ACPI),

	/* PMU_AC_PRESENT - *GPIO */
	PAD_CFG_GPI_TRIG_OWN(PMU_AC_PRESENT, NONE, DEEP, OFF, ACPI),

	/* PMU_BATLOW_B - GPIO */
	PAD_CFG_GPI_TRIG_OWN(PMU_BATLOW_B, NONE, DEEP, OFF, ACPI),

	/* PMU_PLTRST_B - *PMU_PLTRST_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(PMU_PLTRST_B, NONE, DEEP, NF1),

	/* PMU_PWRBTN_B - *PMU_PWRBTN_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(PMU_PWRBTN_B, UP_20K, DEEP, NF1),

	/* PMU_RESETBUTTON_B - *PMU_RSTBTN_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(PMU_RESETBUTTON_B, NONE, DEEP, NF1),

	/* PMU_SLP_S0_B - *PMU_SLP_S0_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(PMU_SLP_S0_B, NONE, DEEP, NF1),

	/* PMU_SLP_S3_B - *PMU_SLP_S3_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(PMU_SLP_S3_B, NONE, DEEP, NF1),

	/* PMU_SLP_S4_B - *PMU_SLP_S4_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(PMU_SLP_S4_B, NONE, DEEP, NF1),

	/* PMU_SUSCLK - *PMU_SUSCLK */
	PAD_CFG_NF_IOSTANDBY_IGNORE(PMU_SUSCLK, NONE, DEEP, NF1),

	/* PMU_WAKE_B - *GPIO */
	PAD_CFG_GPO_IOSSTATE_IOSTERM(PMU_WAKE_B, 1, DEEP, UP_20K, IGNORE, SAME),

	/* SUS_STAT_B - *SUS_STAT_B */
	PAD_CFG_NF_IOSTANDBY_IGNORE(SUS_STAT_B, NONE, DEEP, NF1),

	/* SUSPWRDNACK - GPIO */
	PAD_CFG_GPI_TRIG_OWN(SUSPWRDNACK, NONE, DEEP, OFF, ACPI),

	/*  ------- GPIO Group South-West ------- */

	/* GPIO_205 - PCIE_WAKE0_N */
	PAD_CFG_NF(GPIO_205, NONE, DEEP, NF1),

	/* GPIO_206 - PCIE_WAKE1_N */
	PAD_CFG_NF(GPIO_206, NONE, DEEP, NF1),

	/* GPIO_207 - PCIE_WAKE2_N */
	PAD_CFG_NF(GPIO_207, NONE, DEEP, NF1),

	/* GPIO_208 - PCIE_WAKE3_N */
	PAD_CFG_NF(GPIO_208, NONE, DEEP, NF1),

	/* GPIO_156 - *EMMC_CLK */
	PAD_CFG_NF_IOSSTATE(GPIO_156, DN_20K, DEEP, NF1, Tx0RxDCRx0),

	/* GPIO_157 - *EMMC_D0 */
	PAD_CFG_NF_IOSSTATE(GPIO_157, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_158 - *EMMC_D1 */
	PAD_CFG_NF_IOSSTATE(GPIO_158, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_159 - *EMMC_D2 */
	PAD_CFG_NF_IOSSTATE(GPIO_159, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_160 - *EMMC_D3 */
	PAD_CFG_NF_IOSSTATE(GPIO_160, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_161 - *EMMC_D4 */
	PAD_CFG_NF_IOSSTATE(GPIO_161, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_162 - *EMMC_D5 */
	PAD_CFG_NF_IOSSTATE(GPIO_162, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_163 - *EMMC_D6 */
	PAD_CFG_NF_IOSSTATE(GPIO_163, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_164 - *EMMC_D7 */
	PAD_CFG_NF_IOSSTATE(GPIO_164, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_165 - *EMMC_CMD */
	PAD_CFG_NF_IOSSTATE(GPIO_165, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_166 - *GPIO */
	PAD_CFG_GPIO_HI_Z(GPIO_166, DN_20K, DEEP, TxLASTRxE, SAME),

	/* GPIO_167 - *GPIO */
	PAD_CFG_GPI_TRIG_IOSSTATE_OWN(GPIO_167, UP_20K, DEEP, OFF, HIZCRx1, ACPI),

	/* GPIO_168 - *GPIO */
	PAD_CFG_GPI_TRIG_IOSSTATE_OWN(GPIO_168, UP_20K, DEEP, OFF, HIZCRx1, ACPI),

	/* GPIO_169 - *GPIO */
	PAD_CFG_TERM_GPO(GPIO_169, 0, UP_20K, DEEP),

	/* GPIO_170 - *GPIO */
	PAD_CFG_TERM_GPO(GPIO_170, 1, UP_20K, DEEP),

	/* GPIO_171 - *GPIO */
	PAD_CFG_TERM_GPO(GPIO_171, 1, UP_20K, DEEP),

	/* GPIO_172 - SDCARD_CLK */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_172, DN_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_179 - n/a */
	PAD_CFG_NF(GPIO_179, DN_20K, DEEP, NF1),

	/* GPIO_173 - SDCARD_D0 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_173, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_174 - SDCARD_D1 */
	PAD_CFG_NF_IOSSTATE(GPIO_174, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_175 - SDCARD_D2 */
	PAD_CFG_NF_IOSSTATE(GPIO_175, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_176 - SDCARD_D3 */
	PAD_CFG_NF_IOSSTATE(GPIO_176, UP_20K, DEEP, NF1, HIZCRx1),

	/* GPIO_177 - SDCARD_CD_B */
	PAD_CFG_NF(GPIO_177, UP_20K, DEEP, NF1),

	/* GPIO_178 - SDCARD_CMD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_178, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_186 - SDCARD_LVL_WP */
	PAD_CFG_NF(GPIO_186, UP_20K, DEEP, NF1),

	/* GPIO_182 - *EMMC_RCLK */
	PAD_CFG_NF_IOSSTATE(GPIO_182, DN_20K, DEEP, NF1, HIZCRx0),

	/* GPIO_183 - GPIO */
	PAD_CFG_TERM_GPO(GPIO_183, 0, DN_20K, DEEP),

	/* SMB_ALERTB - SMB_ALERT_N */
	PAD_CFG_NF_IOSTANDBY_IGNORE(SMB_ALERTB, UP_20K, DEEP, NF1),

	/* SMB_CLK - SMB_CLK */
	PAD_CFG_NF_IOSTANDBY_IGNORE(SMB_CLK, UP_20K, DEEP, NF1),

	/* SMB_DATA - SMB_DATA */
	PAD_CFG_NF_IOSTANDBY_IGNORE(SMB_DATA, UP_20K, DEEP, NF1),

	/*
	 * LPC
	 * Note: It's unconfirmed if this redundancy to the bootblock table is necessary.
	 */

	/* LPC_ILB_SERIRQ - LPC_ILB_SERIRQ */
	PAD_CFG_NF_IOSTANDBY_IGNORE(LPC_ILB_SERIRQ, UP_20K, DEEP, NF1),

	/* LPC_CLKOUT0 - LPC_CLKOUT0 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_CLKOUT0, NONE, DEEP, NF1, HIZCRx1, DISPUPD),

	/* LPC_CLKOUT1 - LPC_CLKOUT1 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_CLKOUT1, NONE, DEEP, NF1, HIZCRx1, DISPUPD),

	/* LPC_AD0 - LPC_AD0 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_AD0, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* LPC_AD1 - LPC_AD1 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_AD1, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* LPC_AD2 - LPC_AD2 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_AD2, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* LPC_AD3 - LPC_AD3 */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_AD3, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* LPC_CLKRUNB - LPC_CLKRUNB */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_CLKRUNB, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* LPC_FRAMEB - LPC_FRAMEB */
	PAD_CFG_NF_IOSSTATE_IOSTERM(LPC_FRAMEB, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/*  ------- GPIO Group North ------- */

	/*
	 * LPSS UART
	 * Note: It's unconfirmed if this redundancy to the bootblock table is necessary.
	 */

	/* GPIO_38 - LPSS_UART0_RXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_38, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_39 - LPSS_UART0_TXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_39, UP_20K, DEEP, NF1, TxLASTRxE, DISPUPD),

	/* GPIO_42 - LPSS_UART1_RXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_42, UP_20K, DEEP, NF1, HIZCRx1, DISPUPD),

	/* GPIO_43 - LPSS_UART1_TXD */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_43, UP_20K, DEEP, NF1, HIZCRx0, DISPUPD),
};

#endif /* CFG_GPIO_H */
