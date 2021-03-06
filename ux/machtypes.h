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

#ifndef __UX_MACHTYPES_H
# define __UX_MACHTYPES_H              1

# include <ux/cdefs.h>

# if defined(__UX_x86_64__)
#  include <ux/x86-64/types.h>
# elif defined(__UX_i86__)
#  include <ux/i86/types.h>
# elif defined(__UX_x86__)
#  include <ux/x86/types.h>
# else
#  error Unsupported host architecture
# endif

#endif /*!__UX_FIXEDTYPES_H*/
