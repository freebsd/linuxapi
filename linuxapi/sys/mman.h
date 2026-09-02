#ifndef	__LINUXAPI_SYS_MMAN_H__
#define	__LINUXAPI_SYS_MMAN_H__

#include_next <sys/mman.h>

/* use minherit(2) as needed */
#define	MADV_DOFORK	0x10000001
#define	MADV_DONTFORK	0x10000002

#define	MAP_LOCKED	0	/* XXXKIB implement ? */
#define	MAP_HUGETLB	0
#define	MAP_POPULATE	0
#define	MAP_NORESERVE	0
#define	MAP_GROWSDOWN	0

/*
 * Linux MAP_HUGE_* encodes the huge page size in mmap flags. FreeBSD
 * has no equivalent reservation; MAP_ALIGNED(n) requests 2^n alignment
 * so the VM may back the mapping with superpages.
 */
#ifndef MAP_HUGE_2MB
#define	MAP_HUGE_2MB	MAP_ALIGNED(21)
#endif
#ifndef MAP_HUGE_1GB
#define	MAP_HUGE_1GB	MAP_ALIGNED(30)
#endif

#endif
