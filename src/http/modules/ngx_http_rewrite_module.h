/*
 * Copyright (C) Marcus Clyne
 *
 * Note : this file has been created by the Nginx Development Kit using
 * some code from ngx_http_rewrite_module.c
 */

#ifndef _NGX_HTTP_REWRITE_H_INCLUDED_
#define _NGX_HTTP_REWRITE_H_INCLUDED_

#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>


extern  ngx_module_t  ngx_http_rewrite_module;


typedef struct {
    ngx_array_t  *codes;        /* uintptr_t */

    ngx_uint_t    stack_size;

    ngx_flag_t    log;
    ngx_flag_t    uninitialized_variable_warn;
} ngx_http_rewrite_loc_conf_t;


char *
ngx_http_rewrite_if(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *
ngx_http_rewrite_if_condition(ngx_conf_t *cf, ngx_http_rewrite_loc_conf_t *lcf);
char *
ngx_http_rewrite_variable(ngx_conf_t *cf, ngx_http_rewrite_loc_conf_t *lcf,
    ngx_str_t *value);
char *
ngx_http_rewrite_value(ngx_conf_t *cf, ngx_http_rewrite_loc_conf_t *lcf,
    ngx_str_t *value);
ngx_int_t
ngx_http_rewrite_var(ngx_http_request_t *r, ngx_http_variable_value_t *v,
    uintptr_t data);

#endif
