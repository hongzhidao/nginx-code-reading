
/*
 * Copyright (C) Igor Sysoev
 */


#include <ngx_config.h>
#include <ngx_core.h>


u_char ngx_linux_kern_ostype[50];
u_char ngx_linux_kern_osrelease[20];

int ngx_linux_rtsig_max;


ngx_os_io_t ngx_os_io = {
    ngx_unix_recv,
    ngx_readv_chain,
    ngx_unix_send,
#if (HAVE_SENDFILE)
    ngx_linux_sendfile_chain,
    NGX_IO_SENDFILE
#else
    ngx_writev_chain,
    0
#endif
};


ngx_int_t ngx_os_init(ngx_log_t *log)
{
    struct utsname  u;

    if (uname(&u) == -1) {
        ngx_log_error(NGX_LOG_ALERT, log, ngx_errno, "uname() failed");
        return NGX_ERROR;
    }

    (void) ngx_cpystrn(ngx_linux_kern_ostype, (u_char *) u.sysname,
                       sizeof(ngx_linux_kern_ostype));

    (void) ngx_cpystrn(ngx_linux_kern_osrelease, (u_char *) u.release,
                       sizeof(ngx_linux_kern_osrelease));

    return ngx_posix_init(log);
}


void ngx_os_status(ngx_log_t *log)
{
    ngx_log_error(NGX_LOG_INFO, log, 0, "OS: %s %s",
                  ngx_linux_kern_ostype, ngx_linux_kern_osrelease);

    ngx_log_error(NGX_LOG_INFO, log, 0, "sysctl(KERN_RTSIGMAX): %d",
                  ngx_linux_rtsig_max);

    ngx_posix_status(log);
}
