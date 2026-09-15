/*
 * SPDX-License-Identifier: BSD-2-Clause
 * Copyright (c) 2026, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 */

#ifndef __LINUXAPI_ERRNO_H__
#define	__LINUXAPI_ERRNO_H__

#include_next <errno.h>
#define	ENODATA		100000
#define	EBADE		100001
#define	EREMOTEIO	100002
#define	ENONET		100003

#endif
