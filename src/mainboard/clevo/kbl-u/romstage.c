/* SPDX-License-Identifier: GPL-2.0-only */

#include <soc/romstage.h>
#include <variant/romstage.h>

void mainboard_memory_init_params(FSPM_UPD *mupd)
{
	variant_configure_fspm(mupd);
}
