/* Copyright (c) 2013 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef VBOOT_REFERENCE_FUTILITY_H_
#define VBOOT_REFERENCE_FUTILITY_H_

#include <stdint.h>

#include "2common.h"
#include "host_key.h"

/* This program */
#define MYNAME "futility"

/* Version string (autogenerated) */
extern const char futility_version[];

/* Bitfields indicating the struct/format versions supported by a command */
enum vboot_version  {
	/*
	 * v1.0 is the original structs used since the dawn of time.
	 * v2.0 can verify the firmware in smaller chunks, but there's
	 * no difference in the on-device structs, so it's only
	 * meaningful for the firmware API. Futility doesn't care.
	 */
	VBOOT_VERSION_1_0 = 0x00000001,

	/*
	 * v2.1 uses new and different structs, and is what v2.0 would have
	 * been if someone hadn't started using it before it was ready.
	 */
	VBOOT_VERSION_2_1 = 0x00000002,

	/*
	 * Everything we know about to date.
	 */
	VBOOT_VERSION_ALL = 0x00000003,
};

/* What's our preferred API & data format? */
extern enum vboot_version vboot_version;

/* Here's a structure to define the commands that futility implements. */
struct futil_cmd_t {
	/* String used to invoke this command */
	const char *const name;
	/* Function to do the work. Returns 0 on success.
	 * Called with argv[0] == "name".
	 * It should handle its own "--help" option. */
	int (*const handler) (int argc, char **argv);
	/* Supported ABIs */
	enum vboot_version version;
	/* One-line summary of what it does */
	const char *const shorthelp;
};

/* Macro to define a command */
#define DECLARE_FUTIL_COMMAND(NAME, HANDLER, VERSION, SHORTHELP)	\
	const struct futil_cmd_t __cmd_##NAME = {			\
		.name = #NAME,						\
		.handler = HANDLER,					\
		.version = VERSION,					\
		.shorthelp = SHORTHELP,					\
	}

/* This is the list of pointers to all commands. */
extern const struct futil_cmd_t *const futil_cmds[];

/* Size of an array */
#ifndef ARRAY_SIZE
#define ARRAY_SIZE(array) (sizeof(array)/sizeof(array[0]))
#endif

/* Fatal error (print error message and exit). */
#define FATAL(format, ...) do { \
		fprintf(stderr, "FATAL: %s: " format, __func__, \
			##__VA_ARGS__ ); \
		exit(1); \
	} while (0)

/* Print error messages (won't exit). */
#define ERROR(format, ...) fprintf(stderr, "ERROR: %s: " format, __func__, \
				   ##__VA_ARGS__ )
#define WARN(format, ...) fprintf(stderr, "WARNING: %s: " format, __func__, \
				  ##__VA_ARGS__ )
#define INFO(format, ...) fprintf(stderr, "INFO: %s: " format, __func__, \
				  ##__VA_ARGS__ )
#define STATUS(format, ...) fprintf(stderr, ">> " format, ##__VA_ARGS__ )

/* Debug output (off by default) */
extern int debugging_enabled;

/* Returns true if this looks enough like a GBB header to proceed. */
int futil_looks_like_gbb(struct vb2_gbb_header *gbb, uint32_t len);

/*
 * Returns true if the gbb header is valid (and optionally updates *maxlen).
 * This doesn't verify the contents, though.
 */
int futil_valid_gbb_header(struct vb2_gbb_header *gbb, uint32_t len,
			   uint32_t *maxlen);

/* Sets the HWID string field inside a GBB header. */
int futil_set_gbb_hwid(struct vb2_gbb_header *gbb, const char *hwid);

/* For GBB v1.2 and later, update the hwid_digest */
void update_hwid_digest(struct vb2_gbb_header *gbb);

/* For GBB v1.2 and later, print the stored digest of the HWID (and whether
 * it's correct). Return true if it is correct. */
int print_hwid_digest(struct vb2_gbb_header *gbb,
		      const char *banner, const char *footer);

/* Copies a file or dies with an error message */
void futil_copy_file_or_die(const char *infile, const char *outfile);

/* Update ryu root key header in the image */
int fill_ryu_root_header(uint8_t *ptr, size_t size,
			 const struct vb2_gbb_header *gbb);

/* Verify ryu root key header */
int verify_ryu_root_header(uint8_t *ptr, size_t size,
			   const struct vb2_gbb_header *gbb);

/* Possible file operation errors */
enum futil_file_err {
	FILE_ERR_NONE,
	FILE_ERR_STAT,
	FILE_ERR_SIZE,
	FILE_ERR_MMAP,
	FILE_ERR_MSYNC,
	FILE_ERR_MUNMAP,
	FILE_ERR_OPEN,
	FILE_ERR_CLOSE,
	FILE_ERR_DIR,
	FILE_ERR_CHR,
	FILE_ERR_FIFO,
	FILE_ERR_SOCK,
};

/* Wrapper for mmap/munmap. Skips stupidly large files. */
#define MAP_RO 0
#define MAP_RW 1
enum futil_file_err futil_map_file(int fd, int writeable,
				   uint8_t **buf, uint32_t *len);
enum futil_file_err futil_unmap_file(int fd, int writeable,
				     uint8_t *buf, uint32_t len);

/* The CPU architecture is occasionally important */
enum arch_t {
	ARCH_UNSPECIFIED,
	ARCH_X86,
	ARCH_ARM,
	ARCH_MIPS
};

#endif  /* VBOOT_REFERENCE_FUTILITY_H_ */
