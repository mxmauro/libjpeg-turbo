/* Version ID for the JPEG library.
 * Might be useful for tests like "#if JPEG_LIB_VERSION >= 60".
 */
#define JPEG_LIB_VERSION  80
#define DLL_VERSION 8
#define FULLVERSION 8.0.2
#define VERSION "8.0.2"
#define BUILD "1"
#define PACKAGE_NAME "LibJpeg-turbo"

/* libjpeg-turbo version */
#define LIBJPEG_TURBO_VERSION 0

/* Support arithmetic encoding */
#define C_ARITH_CODING_SUPPORTED

/* Support arithmetic decoding */
#define D_ARITH_CODING_SUPPORTED

/*
 * Define BITS_IN_JSAMPLE as either
 *   8   for 8-bit sample values (the usual setting)
 *   12  for 12-bit sample values
 * Only 8 and 12 are legal data precisions for lossy JPEG according to the
 * JPEG standard, and the IJG code does not support anything else!
 * We do not support run-time selection of data precision, sorry.
 */

#define BITS_IN_JSAMPLE  8      /* use 8 or 12 */

/* Define to 1 if you have the <locale.h> header file. */
#undef HAVE_LOCALE_H

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if the system has the type `unsigned char'. */
#define HAVE_UNSIGNED_CHAR 1

/* Define to 1 if the system has the type `unsigned short'. */
#define HAVE_UNSIGNED_SHORT 1

/* Compiler does not support pointers to undefined structures. */
#undef INCOMPLETE_TYPES_BROKEN

/* Support in-memory source/destination managers */
#undef MEM_SRCDST_SUPPORTED

/* Define if you have BSD-like bzero and bcopy in <strings.h> rather than
   memset/memcpy in <string.h>. */
#undef NEED_BSD_STRINGS

/* Define if you need to include <sys/types.h> to get size_t. */
#undef NEED_SYS_TYPES_H

/* Define if your (broken) compiler shifts signed values as if they were
   unsigned. */
#undef RIGHT_SHIFT_IS_UNSIGNED

/* Use accelerated SIMD routines. */
#define WITH_SIMD 1

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
# undef __CHAR_UNSIGNED__
#endif

/* Define to empty if `const' does not conform to ANSI C. */
//#undef const

/* Define to `unsigned int' if <sys/types.h> does not define. */
//#undef size_t

#define NO_GETENV
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#define getenv(x) NULL
#define putenv _putenv
#define INLINE _inline

#define HAVE_BOOLEAN
typedef unsigned char boolean; //same definition as RpcNdr.h
