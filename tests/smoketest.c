#include <sys/mman.h>
#if !defined(MADV_DOFORK) || !defined(MAP_LOCKED)
#error linuxapi include failure
#endif

#include <sys/sendfile.h>

#include <sys/shm.h>
#if !defined(SHM_HUGETLB)
#error linuxapi include failure
#endif

#include <sys/socket.h>
#if !defined(AF_LLC)
#error linuxapi include failure
#endif

#include <sys/sysmacros.h>

#include <linux/if_ether.h>
#if !defined(ETH_ALEN)
#error linuxapi include failure
#endif

#include <linux/in.h>

#include <linux/in6.h>
struct linux_in6_addr linux_in6_addr_var;

#include <linux/ioctl.h>

#include <linux/ip.h>
struct iphdr iphdr_var;

#include <linux/netlink.h>
#if !defined(NETLINK_RDMA)
#error linuxapi include failure
#endif

#include <linux/rtnetlink.h>

#include <linux/socket.h>

#include <linux/stddef.h>
#if !defined(__struct_group_tag)
#error linuxapi include failure
#endif

#include <linux/types.h>
u64 u64_var;
__u64 __u64_var;

#include <netinet/in.h>
#if !defined(IN6_IS_ADDR_V4MAPPED)
#error linuxapi include failure
#endif

#include <netinet/tcp.h>
#if !defined(TCP_CLOSE) || !defined(TCP_ESTABLISHED)
#error linuxapi include failure
#endif

#include <alloca.h>

#include <errno.h>
#if !defined(ENODATA) || !defined(ENONET)
#error linuxapi include failure
#endif

#include <limits.h>
#if !defined(HOST_NAME_MAX)
#error linuxapi include failure
#endif

#include <string.h>
#if !defined(strdupa) || !defined(strndupa)
#error linuxapi include failure
#endif
