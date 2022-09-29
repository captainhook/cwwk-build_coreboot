/* SPDX-License-Identifier: GPL-2.0-only */

Device (SDM1)
{
	Name (_HID, "INTL9C60")
	Name (_UID, 1)
	Name (_DDN, "DMA Controller #1")

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_DMA1_IRQ
		}
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S0B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S0EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}
}

Device (SDM2)
{
	Name (_HID, "INTL9C60")
	Name (_UID, 2)
	Name (_DDN, "DMA Controller #2")

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_DMA2_IRQ
		}
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S8B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S8EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}
}

Device (I2C1)
{
	Name (_HID, "80860F41")
	Name (_UID, 1)
	Name (_DDN, "I2C Controller #1")

	/* Standard Mode: HCNT, LCNT, SDA Hold Time */
	Name (SSCN, Package () { 0x200, 0x200, 0x6 })

	/* Fast Mode: HCNT, LCNT, SDA Hold Time */
	Name (FMCN, Package () { 0x55, 0x99, 0x6 })

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_I2C1_IRQ
		}
		FixedDMA (0x10, 0x0, Width32Bit, )
		FixedDMA (0x11, 0x1, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S1B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S1EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S1B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (I2C2)
{
	Name (_HID, "80860F41")
	Name (_UID, 2)
	Name (_DDN, "I2C Controller #2")

	/* Standard Mode: HCNT, LCNT, SDA Hold Time */
	Name (SSCN, Package () { 0x200, 0x200, 0x6 })

	/* Fast Mode: HCNT, LCNT, SDA Hold Time */
	Name (FMCN, Package () { 0x55, 0x99, 0x6 })

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_I2C2_IRQ
		}
		FixedDMA (0x12, 0x2, Width32Bit, )
		FixedDMA (0x13, 0x3, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S2B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S2EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S2B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (I2C3)
{
	Name (_HID, "80860F41")
	Name (_UID, 3)
	Name (_DDN, "I2C Controller #3")

	/* Standard Mode: HCNT, LCNT, SDA Hold Time */
	Name (SSCN, Package () { 0x200, 0x200, 0x6 })

	/* Fast Mode: HCNT, LCNT, SDA Hold Time */
	Name (FMCN, Package () { 0x55, 0x99, 0x6 })

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_I2C3_IRQ
		}
		FixedDMA (0x14, 0x4, Width32Bit, )
		FixedDMA (0x15, 0x5, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S3B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S3EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S3B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (I2C4)
{
	Name (_HID, "80860F41")
	Name (_UID, 4)
	Name (_DDN, "I2C Controller #4")

	/* Standard Mode: HCNT, LCNT, SDA Hold Time */
	Name (SSCN, Package () { 0x200, 0x200, 0x6 })

	/* Fast Mode: HCNT, LCNT, SDA Hold Time */
	Name (FMCN, Package () { 0x55, 0x99, 0x6 })

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_I2C4_IRQ
		}
		FixedDMA (0x16, 0x6, Width32Bit, )
		FixedDMA (0x17, 0x7, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S4B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S4EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S4B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (I2C5)
{
	Name (_HID, "80860F41")
	Name (_UID, 5)
	Name (_DDN, "I2C Controller #5")

	/* Standard Mode: HCNT, LCNT, SDA Hold Time */
	Name (SSCN, Package () { 0x200, 0x200, 0x6 })

	/* Fast Mode: HCNT, LCNT, SDA Hold Time */
	Name (FMCN, Package () { 0x55, 0x99, 0x6 })

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_I2C5_IRQ
		}
		FixedDMA (0x18, 0x0, Width32Bit, )
		FixedDMA (0x19, 0x1, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S5B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S5EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S5B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (I2C6)
{
	Name (_HID, "80860F41")
	Name (_UID, 6)
	Name (_DDN, "I2C Controller #6")

	/* Standard Mode: HCNT, LCNT, SDA Hold Time */
	Name (SSCN, Package () { 0x200, 0x200, 0x6 })

	/* Fast Mode: HCNT, LCNT, SDA Hold Time */
	Name (FMCN, Package () { 0x55, 0x99, 0x6 })

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_I2C6_IRQ
		}
		FixedDMA (0x1A, 0x2, Width32Bit, )
		FixedDMA (0x1B, 0x3, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S6B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S6EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S6B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (I2C7)
{
	Name (_HID, "80860F41")
	Name (_UID, 7)
	Name (_DDN, "I2C Controller #7")

	/* Standard Mode: HCNT, LCNT, SDA Hold Time */
	Name (SSCN, Package () { 0x200, 0x200, 0x6 })

	/* Fast Mode: HCNT, LCNT, SDA Hold Time */
	Name (FMCN, Package () { 0x55, 0x99, 0x6 })

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_I2C7_IRQ
		}
		FixedDMA (0x1C, 0x4, Width32Bit, )
		FixedDMA (0x1D, 0x5, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S7B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S7EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S7B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (SPI1)
{
	Name (_HID, "80860F0E")
	Name (_UID, 1)
	Name (_DDN, "SPI Controller #2")

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_SPI_IRQ
		}
		FixedDMA (0x0, 0x0, Width32Bit, )
		FixedDMA (0x1, 0x1, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\S9B0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\S9EN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, S9B1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (PWM1)
{
	Name (_HID, "80860F09")
	Name (_UID, 1)
	Name (_DDN, "PWM Controller #1")

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\SAB0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\SAEN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}
}

Device (PWM2)
{
	Name (_HID, "80860F09")
	Name (_UID, 2)
	Name (_DDN, "PWM Controller #2")

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\SBB0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\SBEN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}
}

Device (UAR1)
{
	Name (_HID, "80860F0A")
	Name (_UID, 1)
	Name (_DDN, "HS-UART Controller #1")

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_HSUART1_IRQ
		}
		FixedDMA (0x2, 0x2, Width32Bit, )
		FixedDMA (0x3, 0x3, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\SCB0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\SCEN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, SCB1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}

Device (UAR2)
{
	Name (_HID, "80860F0A")
	Name (_UID, 2)
	Name (_DDN, "HS-UART Controller #2")

	Name (RBUF, ResourceTemplate()
	{
		Memory32Fixed (ReadWrite, 0, 0x1000, BAR0)
		Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive,,,)
		{
			LPSS_HSUART2_IRQ
		}
		FixedDMA (0x4, 0x4, Width32Bit, )
		FixedDMA (0x5, 0x5, Width32Bit, )
	})

	Method (_CRS)
	{
		CreateDwordField (^RBUF, ^BAR0._BAS, RBAS)
		Store (\SDB0, RBAS)
		Return (^RBUF)
	}

	Method (_STA)
	{
		If (LEqual (\SDEN, 1)) {
			Return (0xF)
		} Else {
			Return (0x0)
		}
	}

	OperationRegion (KEYS, SystemMemory, SDB1, 0x100)
	Field (KEYS, DWordAcc, NoLock, WriteAsZeros)
	{
		Offset (0x84),
		PSAT, 32,
	}

	Method (_PS3)
	{
		Or (PSAT, 0x00000003, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}

	Method (_PS0)
	{
		And (PSAT, 0xfffffffc, PSAT)
		Or (PSAT, 0x00000000, PSAT)
	}
}
