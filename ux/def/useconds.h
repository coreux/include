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

#ifndef __UX_DEF_USECONDS_H
# define __UX_DEF_USECONDS_H           1

# include <ux/kerntypes.h>

# if _XOPEN_SOURCE >= 600

/* suseconds_t: Used for time in microseconds */
typedef __ux_suseconds_t suseconds_t;

/* useconds_t: Used for for time in microseconds */
typedef __ux_useconds_t useconds_t;

# endif

#endif /*!__UX_DEF_USECONDS_H*/
