/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef __CROS_EC_IOEXPANDER_TCA6416A_H
#define __CROS_EC_IOEXPANDER_TCA6416A_H

#include <stdint.h>

#define TCA6416A_ADDR_FLAGS 0x21

enum tca6416a_bank {
	TCA6416A_IN_PORT_0  = 0x0,
	TCA6416A_IN_PORT_1  = 0x1,
	TCA6416A_OUT_PORT_0 = 0x2,
	TCA6416A_OUT_PORT_1 = 0x3,
	TCA6416A_DIR_PORT_0 = 0x6,
	TCA6416A_DIR_PORT_1 = 0x7,
};

/*
 * Set a bit in the supplied bank
 *
 * @param port  The I2C port of TCA6416A.
 * @param bank  The bank the bit belongs to.
 * @param bit   The index of the bit to set.
 * @param val   The value to set.
 *
 * @return EC_SUCCESS, or EC_ERROR_* on error.
 */
int tca6416a_write_bit(int port,
			enum tca6416a_bank bank, uint8_t bit, int val);

/*
 * Get a bit in the supplied bank
 *
 * @param port  The I2C port of TCA6416A.
 * @param bank  The bank the bit belongs to.
 * @param bit   The index of the bit to get.
 *
 * @return bit value, or -1 on error.
 */
int tca6416a_read_bit(int port, enum tca6416a_bank bank, uint8_t bit);

/*
 * Write a byt to the supplied bank
 *
 * @param port The I2C port of TCA6416A.
 * @param bank  The bank to write the byte to.
 *
 * @return EC_SUCCESS, or EC_ERROR_* on error.
 */
int tca6416a_write_byte(int port, enum tca6416a_bank bank, uint8_t val);

/*
 * Read a byte in the supplied bank
 *
 * @param port  The I2C port of TCA6416A.
 * @param bank  The bank to read byte from.
 *
 * @return byte value, or -1 on error.
 */
int tca6416a_read_byte(int port, enum tca6416a_bank bank);

#endif /* __CROS_EC_IOEXPANDER_TCA6416A_H */
