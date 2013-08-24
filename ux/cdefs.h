/*
 * Copyright 2013 Mo McRoberts.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __UX_CDEFS_H
# define __UX_CDEFS_H                  1

# if defined(__x86_64__) || defined(_M_AMD64)
#  define __UX_x86_64__                1
# elif defined(__i86__) || defined(__i186__) || defined(__i286__) || defined(_M_I86) || defined(_M_I186) || defined(_M_I286)
#  define __UX_i86__                   1
# elif defined(__i386__) || defined(_M_IX86)
#  define __UX_x86__                   1
# else
#  error Unsupported host architecture
# endif

# if defined(__APPLE__)
#  define __UX_darwin__                1
# elif defined(__linux__)
#  define __UX_linux__                 1
# elif defined(__sun__) && defined(__svr4__)
#  define __UX_solaris__               1
# elif defined(_MINIX)
#  define __UX_minix__                 1
# elif defined(__BEOS__) || defined(__HAIKU__)
#  define __UX_beos__                  1
# elif defined(__FreeBSD__)
#  define __UX_freebsd__               1
# elif defined(__OpenBSD__)
#  define __UX_openbsd__               1
# elif defined(__NetBSD__)
#  define __UX_netbsd__                1
# elif defined(__QNXNTO__)
#  define __UX_neutrino__              1
# elif defined(__CYGWIN__)
#  define __UX_cygwin__                1
# elif defined(__INTERIX) || defined(__OPENNT)
#  define __UX_interix__               1
# elif (defined(__WIN32__) || defined(__WIN64__)|| defined(_WIN32) || defined(_WIN64)) && !defined(_VC_NODEFAULTLIB)
#  define __UX_msvcrt__                1
# else
#  error Unsupported host kernel
# endif

# ifndef _POSIX_C_SOURCE
#  if defined(_XOPEN_SOURCE) && _XOPEN_SOURCE == 600
#   define _POSIX_C_SOURCE             200112L
#  endif
# endif

# if defined(__cplusplus)
#  define __UX_BEGIN_DECLS             extern "C" {
#  define __UX_END_DECLS               }
# else
#  define __UX_BEGIN_DECLS
#  define __UX_END_DECLS
# endif

# define __UX_CONCAT(a, b)             a ## b
# define __UX_STRING(a)                #a

# if defined(__GNUC__)
#  define __UX_WEAK                    __attribute__((weak))
/* Darwin and Win32/Win64 prefix global symbols with an underscore */
#  if defined(__APPLE__) || defined(_WIN32) || defined(_WIN64)
#   define __UX_SUF(name, suffix)      __asm("_" __UX_STRING(name) suffix)
#  else
#   define __UX_SUF(name, suffix)      __asm(__UX_STRING(name) suffix)
#  endif
# else
#  error Unsupported compiler
# endif

# define __UX_SUFFIX_UX03              "$UX$2003"
# define __UX_SUFFIX_PRIVATE           "$UX$private"

# define __UX_SYM03(name)              __UX_SUF(name, __UX_SUFFIX_UX03)
# define __UX_PRIVATE(name)            __UX_SUF(name, __UX_SUFFIX_PRIVATE)

#endif /*!__UX_CDEFS_H*/
