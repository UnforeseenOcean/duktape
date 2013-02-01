/*
 *  Top-level include file to be used for all (internal) source files.
 *
 *  Source files should not include individual header files, as they
 *  have not been designed to be individually included.
 */

#ifndef __DUK_INTERNAL_H
#define __DUK_INTERNAL_H 1

/* these need to be cleaned up eventually to be more precise */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>  /* varargs */
#include <setjmp.h>
#include <stddef.h>  /* e.g. ptrdiff_t */

#include "duk_features.h"
#include "duk_misc.h"
#include "duk_rdtsc.h"
#include "duk_bittypes.h"
#include "duk_jmpbuf.h"
#include "duk_forwdecl.h"
#include "duk_js_bytecode.h"
#include "duk_lexer.h"
#include "duk_js_compiler.h"
#include "duk_regexp.h"
#include "duk_tval.h"
#include "duk_heaphdr.h"
#include "duk_api.h"
#include "duk_api_internal.h"
#include "duk_hstring.h"
#include "duk_hobject.h"
#include "duk_hcompiledfunction.h"
#include "duk_hnativefunction.h"
#include "duk_hthread.h"
#include "duk_hbuffer.h"
#include "duk_heap.h"
#include "duk_debug.h"
#include "duk_error.h"
#include "duk_util.h"
#include "duk_unicode.h"
#include "duk_js.h"
#include "duk_builtin_protos.h"
#include "duk_strings.h"   /* autogenerated */
#include "duk_builtins.h"  /* autogenerated */

#endif  /* __DUK_INTERNAL_H */

