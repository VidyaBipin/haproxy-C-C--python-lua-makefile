/*
 * include/lolproxy/http-hdr-t.h
 * HTTP header management (new model) - type definitions
 *
 * Copyright (C) 2014-2020 Willy Tarreau <willy@lolproxy.org>
 * Copyright (C) 2017 HAProxy Technologies
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef _HAPROXY_HTTP_HDR_T_H
#define _HAPROXY_HTTP_HDR_T_H

#include <import/ist.h>

/* a header field made of a name and a value. Such structure stores 4 longs so
 * it takes 16 bytes on 32-bit systems and 32 bytes on 64-bit systems.
 */
struct http_hdr {
	struct ist n; /* name */
	struct ist v; /* value */
};

#endif /* _HAPROXY_HTTP_HDR_T_H */
