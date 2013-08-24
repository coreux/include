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

#ifndef __UX_BEOS_TYPES_H
# define __UX_BEOS_TYPES_H             1

# if !defined(__BEOS__) && !defined(__HAIKU__)
#  error Compilation of this file is only supported on BeOS and Haiku
# endif

# include <ux/machtypes.h>

/* blkcnt_t: Used for file block counts */
typedef __UX_INT64 __ux_blkcnt_t;

/* blksize_t: Used for block sizes */
typedef __UX_INT32 __ux_blksize_t;

/* dev_t: Used for device IDs */
typedef __UX_INT32 __ux_dev_t;

/* fsblkcnt_t: Used for filesystem block counts */
typedef __UX_INT64 __ux_fsblkcnt_t;

/* fsfilcnt_t: Used for filesystem file counts */
typedef __UX_INT64 __ux_fsfilcnt_t;

/* gid_t: Used for group IDs */
typedef __UX_UINT32 __ux_gid_t;

/* id_t: Used as a general identifier; can be used to contain at least a
 *   pid_t, uid_t or gid_t. */
typedef __UX_INT32 __ux_id_t;

/* ino_t: Used for file serial numbers */
typedef __UX_INT64 __ux_ino_t;

/* key_t: Used for XSI interprocess communication */
typedef __UX_INT32 __ux_key_t;

/* mode_t: Used for some file attributes */
typedef __UX_UINT32 __ux_mode_t;

/* nlink_t: Used for link counts */
typedef __UX_INT32 __ux_nlink_t;

/* off_t: Used for file sizes */
typedef __UX_INT64 __ux_off_t;

/* pid_t: Used for process IDs and process group IDs */
typedef __UX_INT32 __ux_pid_t;

/* suseconds_t: Used for time in microseconds */
typedef __UX_INT32 __ux_suseconds_t;

/* uid_t: Used for user IDs */
typedef __UX_UINT32 __ux_uid_t;

/* useconds_t: Used for for time in microseconds */
typedef __UX_UINT32 __ux_useconds_t;

#endif /*!__UX_BEOS_TYPES_H*/
