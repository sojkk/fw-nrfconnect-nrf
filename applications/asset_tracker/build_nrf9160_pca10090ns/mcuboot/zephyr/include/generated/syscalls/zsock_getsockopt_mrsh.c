/* auto-generated by gen_syscalls.py, don't edit */
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif
#include <syscalls/socket.h>

extern int z_vrfy_zsock_getsockopt(int sock, int level, int optname, void * optval, socklen_t * optlen);
u32_t z_mrsh_zsock_getsockopt(u32_t arg0, u32_t arg1, u32_t arg2,
		u32_t arg3, u32_t arg4, u32_t arg5, void *ssf)
{
	_current_cpu->syscall_frame = ssf;
	(void) arg5;	/* unused */
	int ret = z_vrfy_zsock_getsockopt(*(int*)&arg0, *(int*)&arg1, *(int*)&arg2, *(void **)&arg3, *(socklen_t **)&arg4)
;
	return (u32_t) ret;
}

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif
