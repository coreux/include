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

/*

http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stddef.h.html

*/

#ifndef UX_STDDEF_H_
# define UX_STDDEF_H_                  1

/* Define NULL */
# ifndef NULL
#  if defined(__cplusplus)
#   if defined(__GNUG__)
/* For G++, use the builtin __null */
#    define NULL                       __null
#   else
#    define NULL                       (0L)
#   endif
#  else /*__cplusplus*/
#   define NULL                        ((void *) 0)
#  endif
# endif /*NULL*/

/* Define ptrdiff_t */
# ifdef __PTRDIFF_TYPE__
typedef __PTRDIFF_TYPE__ ptrdiff_t;
# else
typedef long ptrdiff_t;
# endif

/* Define wchar_t */
# ifdef __WCHAR_TYPE__
typedef __WCHAR_TYPE__ wchar_t;
# else
typedef int wchar_t;
# endif

/* Define size_t */
# ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ size_t;
# else
typedef unsigned long size_t;
# endif

#endif /*!UX_STDDEF_H_*/