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

#ifndef __UX_KERNTYPES_H
# define __UX_KERNTYPES_H              1

# include <ux/cdefs.h>

# if defined(__UX_darwin__)
#  include <ux/darwin/types.h>
# elif defined(__UX_linux__)
#  include <ux/linux/types.h>
# elif defined(__UX_solaris__)
#  include <ux/solaris/types.h>
# elif defined(__UX_minix__)
#  include <ux/minix/types.h>
# elif defined(__UX_beos__)
#  include <ux/beos/types.h>
# elif defined(__UX_freebsd__)
#  include <ux/freebsd/types.h>
# elif defined(__UX_openbsd__)
#  include <ux/openbsd/types.h>
# elif defined(__UX_netbsd__)
#  include <ux/netbsd/types.h>
# elif defined(__UX_neutrino__)
#  include <ux/neutrino/types.h>
# elif defined(__UX_cygwin__)
#  include <ux/cygwin/types.h>
# elif defined(__UX_interix__)
#  include <ux/interix/types.h>
# elif defined(__UX_msvcrt__)
#  include <ux/msvcrt/types.h>
# else
#  error Unsupported host kernel
# endif

#endif /*!__UX_KERNTYPES_H*/
