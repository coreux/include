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

#ifndef __UX_DEF_PTHREAD_H
# define __UX_DEF_PTHREAD_H            1

# include <ux/features.h>

# if __UX_OPT_THR >= 0

typedef struct __ux_pthread_attr_struct *pthread_attr_t;
#  if __UX_OPT_BAR >= 0
typedef struct __ux_pthread_barrier_struct *pthread_barrier_t;
typedef struct __ux_pthread_barrierattr_struct *pthread_barrierattr_t;
# endif
typedef struct __ux_pthread_cond_struct pthread_cond_t;
typedef struct __ux_pthread_condaddr_struct *pthread_condattr_t;
typedef struct __ux_pthread_key_struct *pthread_key_t;
typedef struct __ux_pthread_mutex_struct pthread_mutex_t;
typedef struct __ux_pthread_mutexattr_struct *pthread_mutexattr_t;
typedef struct __ux_pthread_once_struct pthread_once_t;
typedef struct __ux_pthread_rwlock_struct pthread_rwlock_t;
typedef struct __ux_pthread_rwlockattr_struct *pthread_rwlockattr_t;
# if __UX_OPT_SPI >= 0
typedef struct __ux_pthread_spinlock_struct pthread_spinlock_t;
# endif
typedef int pthread_t;

#endif /*!__UX_DEF_PTHREAD_H*/
