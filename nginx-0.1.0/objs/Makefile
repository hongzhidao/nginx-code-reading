CC = gcc
CPP = gcc -E
LINK = $(CC)
CFLAGS =   -pipe  -O -W -Wall -Wpointer-arith -Wno-unused -Werror -g

ALL_INCS = -I src/core -I src/event -I src/event/modules -I src/os/unix -I objs -I src/http -I src/http/modules -I src/http/modules/proxy -I src/imap

CORE_DEPS = \
	src/core/nginx.h \
	src/core/ngx_config.h \
	src/core/ngx_core.h \
	src/core/ngx_log.h \
	src/core/ngx_palloc.h \
	src/core/ngx_array.h \
	src/core/ngx_list.h \
	src/core/ngx_table.h \
	src/core/ngx_buf.h \
	src/core/ngx_string.h \
	src/core/ngx_parse.h \
	src/core/ngx_inet.h \
	src/core/ngx_file.h \
	src/core/ngx_crc.h \
	src/core/ngx_rbtree.h \
	src/core/ngx_times.h \
	src/core/ngx_connection.h \
	src/core/ngx_cycle.h \
	src/core/ngx_conf_file.h \
	src/core/ngx_garbage_collector.h \
	src/event/ngx_event.h \
	src/event/ngx_event_timer.h \
	src/event/ngx_event_posted.h \
	src/event/ngx_event_busy_lock.h \
	src/event/ngx_event_connect.h \
	src/event/ngx_event_pipe.h \
	src/os/unix/ngx_time.h \
	src/os/unix/ngx_types.h \
	src/os/unix/ngx_errno.h \
	src/os/unix/ngx_alloc.h \
	src/os/unix/ngx_files.h \
	src/os/unix/ngx_channel.h \
	src/os/unix/ngx_shared.h \
	src/os/unix/ngx_process.h \
	src/os/unix/ngx_atomic.h \
	src/os/unix/ngx_thread.h \
	src/os/unix/ngx_socket.h \
	src/os/unix/ngx_os.h \
	src/os/unix/ngx_process_cycle.h \
	src/os/unix/ngx_linux_config.h \
	src/core/ngx_regex.h \

CORE_INCS =  -I src/core -I src/event -I src/event/modules -I src/os/unix -I objs

HTTP_DEPS = \
	src/http/ngx_http.h \
	src/http/ngx_http_request.h \
	src/http/ngx_http_config.h \
	src/http/ngx_http_core_module.h \
	src/http/ngx_http_cache.h \
	src/http/ngx_http_busy_lock.h \
	src/http/ngx_http_log_handler.h \
	src/http/modules/proxy/ngx_http_proxy_handler.h \

HTTP_INCS =  -I src/http -I src/http/modules -I src/http/modules/proxy -I objs

nginx: \
	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_garbage_collector.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_busy_lock.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shared.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/ngx_http_header_filter.o \
	objs/src/http/ngx_http_write_filter.o \
	objs/src/http/ngx_http_copy_filter.o \
	objs/src/http/ngx_http_log_handler.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_parse_time.o \
	objs/src/http/modules/ngx_http_static_handler.o \
	objs/src/http/modules/ngx_http_index_handler.o \
	objs/src/http/modules/ngx_http_chunked_filter.o \
	objs/src/http/modules/ngx_http_range_filter.o \
	objs/src/http/modules/ngx_http_headers_filter.o \
	objs/src/http/modules/ngx_http_not_modified_filter.o \
	objs/src/http/ngx_http_busy_lock.o \
	objs/src/http/modules/ngx_http_gzip_filter.o \
	objs/src/http/modules/ngx_http_charset_filter.o \
	objs/src/http/modules/ngx_http_userid_filter.o \
	objs/src/http/modules/ngx_http_access_handler.o \
	objs/src/http/modules/ngx_http_rewrite_handler.o \
	objs/src/http/modules/proxy/ngx_http_proxy_handler.o \
	objs/src/http/modules/proxy/ngx_http_proxy_upstream.o \
	objs/src/http/modules/proxy/ngx_http_proxy_parse.o \
	objs/src/http/modules/proxy/ngx_http_proxy_header.o \
	objs/ngx_modules.o \

	$(LINK) -o nginx \
	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_garbage_collector.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_busy_lock.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shared.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/ngx_http_header_filter.o \
	objs/src/http/ngx_http_write_filter.o \
	objs/src/http/ngx_http_copy_filter.o \
	objs/src/http/ngx_http_log_handler.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_parse_time.o \
	objs/src/http/modules/ngx_http_static_handler.o \
	objs/src/http/modules/ngx_http_index_handler.o \
	objs/src/http/modules/ngx_http_chunked_filter.o \
	objs/src/http/modules/ngx_http_range_filter.o \
	objs/src/http/modules/ngx_http_headers_filter.o \
	objs/src/http/modules/ngx_http_not_modified_filter.o \
	objs/src/http/ngx_http_busy_lock.o \
	objs/src/http/modules/ngx_http_gzip_filter.o \
	objs/src/http/modules/ngx_http_charset_filter.o \
	objs/src/http/modules/ngx_http_userid_filter.o \
	objs/src/http/modules/ngx_http_access_handler.o \
	objs/src/http/modules/ngx_http_rewrite_handler.o \
	objs/src/http/modules/proxy/ngx_http_proxy_handler.o \
	objs/src/http/modules/proxy/ngx_http_proxy_upstream.o \
	objs/src/http/modules/proxy/ngx_http_proxy_parse.o \
	objs/src/http/modules/proxy/ngx_http_proxy_header.o \
	objs/ngx_modules.o \
	-lpcre -lz \
	

objs/ngx_modules.o: \
	objs/ngx_modules.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/ngx_modules.o \
		objs/ngx_modules.c

objs/src/core/nginx.o: \
	src/core/nginx.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/nginx.o \
		src/core/nginx.c

objs/src/core/ngx_log.o: \
	src/core/ngx_log.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_log.o \
		src/core/ngx_log.c

objs/src/core/ngx_palloc.o: \
	src/core/ngx_palloc.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_palloc.o \
		src/core/ngx_palloc.c

objs/src/core/ngx_array.o: \
	src/core/ngx_array.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_array.o \
		src/core/ngx_array.c

objs/src/core/ngx_list.o: \
	src/core/ngx_list.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_list.o \
		src/core/ngx_list.c

objs/src/core/ngx_buf.o: \
	src/core/ngx_buf.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_buf.o \
		src/core/ngx_buf.c

objs/src/core/ngx_output_chain.o: \
	src/core/ngx_output_chain.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_output_chain.o \
		src/core/ngx_output_chain.c

objs/src/core/ngx_string.o: \
	src/core/ngx_string.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_string.o \
		src/core/ngx_string.c

objs/src/core/ngx_parse.o: \
	src/core/ngx_parse.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_parse.o \
		src/core/ngx_parse.c

objs/src/core/ngx_inet.o: \
	src/core/ngx_inet.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_inet.o \
		src/core/ngx_inet.c

objs/src/core/ngx_file.o: \
	src/core/ngx_file.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_file.o \
		src/core/ngx_file.c

objs/src/core/ngx_rbtree.o: \
	src/core/ngx_rbtree.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_rbtree.o \
		src/core/ngx_rbtree.c

objs/src/core/ngx_times.o: \
	src/core/ngx_times.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_times.o \
		src/core/ngx_times.c

objs/src/core/ngx_connection.o: \
	src/core/ngx_connection.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_connection.o \
		src/core/ngx_connection.c

objs/src/core/ngx_cycle.o: \
	src/core/ngx_cycle.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_cycle.o \
		src/core/ngx_cycle.c

objs/src/core/ngx_spinlock.o: \
	src/core/ngx_spinlock.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_spinlock.o \
		src/core/ngx_spinlock.c

objs/src/core/ngx_conf_file.o: \
	src/core/ngx_conf_file.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_conf_file.o \
		src/core/ngx_conf_file.c

objs/src/core/ngx_garbage_collector.o: \
	src/core/ngx_garbage_collector.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_garbage_collector.o \
		src/core/ngx_garbage_collector.c

objs/src/event/ngx_event.o: \
	src/event/ngx_event.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/ngx_event.o \
		src/event/ngx_event.c

objs/src/event/ngx_event_timer.o: \
	src/event/ngx_event_timer.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/ngx_event_timer.o \
		src/event/ngx_event_timer.c

objs/src/event/ngx_event_posted.o: \
	src/event/ngx_event_posted.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/ngx_event_posted.o \
		src/event/ngx_event_posted.c

objs/src/event/ngx_event_busy_lock.o: \
	src/event/ngx_event_busy_lock.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/ngx_event_busy_lock.o \
		src/event/ngx_event_busy_lock.c

objs/src/event/ngx_event_accept.o: \
	src/event/ngx_event_accept.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/ngx_event_accept.o \
		src/event/ngx_event_accept.c

objs/src/event/ngx_event_connect.o: \
	src/event/ngx_event_connect.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/ngx_event_connect.o \
		src/event/ngx_event_connect.c

objs/src/event/ngx_event_pipe.o: \
	src/event/ngx_event_pipe.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/ngx_event_pipe.o \
		src/event/ngx_event_pipe.c

objs/src/os/unix/ngx_time.o: \
	src/os/unix/ngx_time.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_time.o \
		src/os/unix/ngx_time.c

objs/src/os/unix/ngx_errno.o: \
	src/os/unix/ngx_errno.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_errno.o \
		src/os/unix/ngx_errno.c

objs/src/os/unix/ngx_alloc.o: \
	src/os/unix/ngx_alloc.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_alloc.o \
		src/os/unix/ngx_alloc.c

objs/src/os/unix/ngx_files.o: \
	src/os/unix/ngx_files.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_files.o \
		src/os/unix/ngx_files.c

objs/src/os/unix/ngx_socket.o: \
	src/os/unix/ngx_socket.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_socket.o \
		src/os/unix/ngx_socket.c

objs/src/os/unix/ngx_recv.o: \
	src/os/unix/ngx_recv.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_recv.o \
		src/os/unix/ngx_recv.c

objs/src/os/unix/ngx_readv_chain.o: \
	src/os/unix/ngx_readv_chain.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_readv_chain.o \
		src/os/unix/ngx_readv_chain.c

objs/src/os/unix/ngx_send.o: \
	src/os/unix/ngx_send.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_send.o \
		src/os/unix/ngx_send.c

objs/src/os/unix/ngx_writev_chain.o: \
	src/os/unix/ngx_writev_chain.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_writev_chain.o \
		src/os/unix/ngx_writev_chain.c

objs/src/os/unix/ngx_channel.o: \
	src/os/unix/ngx_channel.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_channel.o \
		src/os/unix/ngx_channel.c

objs/src/os/unix/ngx_shared.o: \
	src/os/unix/ngx_shared.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_shared.o \
		src/os/unix/ngx_shared.c

objs/src/os/unix/ngx_process.o: \
	src/os/unix/ngx_process.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process.o \
		src/os/unix/ngx_process.c

objs/src/os/unix/ngx_daemon.o: \
	src/os/unix/ngx_daemon.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_daemon.o \
		src/os/unix/ngx_daemon.c

objs/src/os/unix/ngx_posix_init.o: \
	src/os/unix/ngx_posix_init.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_posix_init.o \
		src/os/unix/ngx_posix_init.c

objs/src/os/unix/ngx_process_cycle.o: \
	src/os/unix/ngx_process_cycle.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process_cycle.o \
		src/os/unix/ngx_process_cycle.c

objs/src/os/unix/ngx_linux_init.o: \
	src/os/unix/ngx_linux_init.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_init.o \
		src/os/unix/ngx_linux_init.c

objs/src/event/modules/ngx_epoll_module.o: \
	src/event/modules/ngx_epoll_module.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/event/modules/ngx_epoll_module.o \
		src/event/modules/ngx_epoll_module.c

objs/src/os/unix/ngx_linux_sendfile_chain.o: \
	src/os/unix/ngx_linux_sendfile_chain.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_sendfile_chain.o \
		src/os/unix/ngx_linux_sendfile_chain.c

objs/src/core/ngx_regex.o: \
	src/core/ngx_regex.c $(CORE_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) \
		-o objs/src/core/ngx_regex.o \
		src/core/ngx_regex.c

objs/src/http/ngx_http.o: \
	src/http/ngx_http.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http.o \
		src/http/ngx_http.c

objs/src/http/ngx_http_core_module.o: \
	src/http/ngx_http_core_module.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_core_module.o \
		src/http/ngx_http_core_module.c

objs/src/http/ngx_http_special_response.o: \
	src/http/ngx_http_special_response.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_special_response.o \
		src/http/ngx_http_special_response.c

objs/src/http/ngx_http_request.o: \
	src/http/ngx_http_request.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request.o \
		src/http/ngx_http_request.c

objs/src/http/ngx_http_parse.o: \
	src/http/ngx_http_parse.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_parse.o \
		src/http/ngx_http_parse.c

objs/src/http/ngx_http_header_filter.o: \
	src/http/ngx_http_header_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_header_filter.o \
		src/http/ngx_http_header_filter.c

objs/src/http/ngx_http_write_filter.o: \
	src/http/ngx_http_write_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_write_filter.o \
		src/http/ngx_http_write_filter.c

objs/src/http/ngx_http_copy_filter.o: \
	src/http/ngx_http_copy_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_copy_filter.o \
		src/http/ngx_http_copy_filter.c

objs/src/http/ngx_http_log_handler.o: \
	src/http/ngx_http_log_handler.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_log_handler.o \
		src/http/ngx_http_log_handler.c

objs/src/http/ngx_http_request_body.o: \
	src/http/ngx_http_request_body.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request_body.o \
		src/http/ngx_http_request_body.c

objs/src/http/ngx_http_parse_time.o: \
	src/http/ngx_http_parse_time.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_parse_time.o \
		src/http/ngx_http_parse_time.c

objs/src/http/modules/ngx_http_static_handler.o: \
	src/http/modules/ngx_http_static_handler.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_static_handler.o \
		src/http/modules/ngx_http_static_handler.c

objs/src/http/modules/ngx_http_index_handler.o: \
	src/http/modules/ngx_http_index_handler.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_index_handler.o \
		src/http/modules/ngx_http_index_handler.c

objs/src/http/modules/ngx_http_chunked_filter.o: \
	src/http/modules/ngx_http_chunked_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_chunked_filter.o \
		src/http/modules/ngx_http_chunked_filter.c

objs/src/http/modules/ngx_http_range_filter.o: \
	src/http/modules/ngx_http_range_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_range_filter.o \
		src/http/modules/ngx_http_range_filter.c

objs/src/http/modules/ngx_http_headers_filter.o: \
	src/http/modules/ngx_http_headers_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_headers_filter.o \
		src/http/modules/ngx_http_headers_filter.c

objs/src/http/modules/ngx_http_not_modified_filter.o: \
	src/http/modules/ngx_http_not_modified_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_not_modified_filter.o \
		src/http/modules/ngx_http_not_modified_filter.c

objs/src/http/ngx_http_busy_lock.o: \
	src/http/ngx_http_busy_lock.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_busy_lock.o \
		src/http/ngx_http_busy_lock.c

objs/src/http/modules/ngx_http_gzip_filter.o: \
	src/http/modules/ngx_http_gzip_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gzip_filter.o \
		src/http/modules/ngx_http_gzip_filter.c

objs/src/http/modules/ngx_http_charset_filter.o: \
	src/http/modules/ngx_http_charset_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_charset_filter.o \
		src/http/modules/ngx_http_charset_filter.c

objs/src/http/modules/ngx_http_userid_filter.o: \
	src/http/modules/ngx_http_userid_filter.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_userid_filter.o \
		src/http/modules/ngx_http_userid_filter.c

objs/src/http/modules/ngx_http_access_handler.o: \
	src/http/modules/ngx_http_access_handler.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_access_handler.o \
		src/http/modules/ngx_http_access_handler.c

objs/src/http/modules/ngx_http_rewrite_handler.o: \
	src/http/modules/ngx_http_rewrite_handler.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_rewrite_handler.o \
		src/http/modules/ngx_http_rewrite_handler.c

objs/src/http/modules/proxy/ngx_http_proxy_handler.o: \
	src/http/modules/proxy/ngx_http_proxy_handler.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/proxy/ngx_http_proxy_handler.o \
		src/http/modules/proxy/ngx_http_proxy_handler.c

objs/src/http/modules/proxy/ngx_http_proxy_upstream.o: \
	src/http/modules/proxy/ngx_http_proxy_upstream.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/proxy/ngx_http_proxy_upstream.o \
		src/http/modules/proxy/ngx_http_proxy_upstream.c

objs/src/http/modules/proxy/ngx_http_proxy_parse.o: \
	src/http/modules/proxy/ngx_http_proxy_parse.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/proxy/ngx_http_proxy_parse.o \
		src/http/modules/proxy/ngx_http_proxy_parse.c

objs/src/http/modules/proxy/ngx_http_proxy_header.o: \
	src/http/modules/proxy/ngx_http_proxy_header.c $(CORE_DEPS) $(HTTP_DEPS)
	$(CC) -c $(CFLAGS)  $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/proxy/ngx_http_proxy_header.o \
		src/http/modules/proxy/ngx_http_proxy_header.c

install:
	test -d /usr/local/nginx || mkdir -p /usr/local/nginx

	test -d /usr/local/nginx/sbin || mkdir -p /usr/local/nginx/sbin
	test ! -f /usr/local/nginx/sbin/nginx || mv /usr/local/nginx/sbin/nginx /usr/local/nginx/sbin/nginx.old
	cp nginx /usr/local/nginx/sbin/nginx

	test -d /usr/local/nginx/conf || mkdir -p /usr/local/nginx/conf

	cp conf/koi-win /usr/local/nginx/conf

	test -f /usr/local/nginx/conf/mime.types || 		cp conf/mime.types /usr/local/nginx/conf/mime.types
	cp conf/mime.types /usr/local/nginx/conf/mime.types.default

	test -f /usr/local/nginx/conf/nginx.conf || cp conf/nginx.conf /usr/local/nginx/conf/nginx.conf
	cp conf/nginx.conf /usr/local/nginx/conf/nginx.conf.default

	test -d /usr/local/nginx/logs || mkdir -p /usr/local/nginx/logs

	test -d /usr/local/nginx/logs || mkdir -p /usr/local/nginx/logs

	test -d /usr/local/nginx/html || cp -r html /usr/local/nginx

	#test -d /usr/local/nginx/temp || mkdir -p /usr/local/nginx/temp

	test -d /usr/local/nginx/logs || mkdir -p /usr/local/nginx/logs
