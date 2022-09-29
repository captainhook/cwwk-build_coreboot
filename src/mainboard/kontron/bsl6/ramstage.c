/* SPDX-License-Identifier: GPL-2.0-only */

#include <device/device.h>
#include <mainboard/gpio.h>

static void init_mainboard(void *chip_info)
{
	mainboard_configure_gpios();
}

struct chip_operations mainboard_ops = {
	.init = init_mainboard,
};
