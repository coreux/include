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

#ifndef __UX_CONST_NULL_H
# define __UX_CONST_NULL_H             1

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


#endif /*!__UX_CONSTNULL_H*/
