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

#ifndef __UX_FEATURES_H
# define __UX_FEATURES_H               1

/* The following macros define the features supported by this implementation */

/* Version numbers */
# define __UX_POSIX_VERSION            200112L
# define __UX_XOPEN_VERSION            600

/* Option groups */

/* advisory information */
# define __UX_OPT_ADV                  -1
/* asynchronous I/O */
# define __UX_OPT_AIO                  -1
/* barriers */
# define __UX_OPT_BAR                  -1
/* clock selection */
# define __UX_OPT_CS                   -1
/* CPU-time */
# define __UX_OPT_CPT                  -1
/* file synchronisation */
# define __UX_OPT_FSC                  -1
/* mapped files */
# define __UX_OPT_MF                   -1
/* memory locking */
# define __UX_OPT_ML                   -1
/* range memory locking */
# define __UX_OPT_MR                   -1
/* memory protection */
# define __UX_OPT_MPR                  -1
/* message passing */
# define __UX_OPT_MSG                  -1
/* monotonic clock */
# define __UX_OPT_MON                  -1
/* prioritised I/O */
# define __UX_OPT_PIO                  -1
/* priority scheduling */
# define __UX_OPT_PS                   -1
/* raw sockets */
# define __UX_OPT_RS                   -1
/* threads */
# define __UX_OPT_THR                  -1
/* real-time signals */
# define __UX_OPT_RTS                  -1
/* semaphores */
# define __UX_OPT_SEM                  -1
/* shared memory objects */
# define __UX_OPT_SHM                  -1
/* spawn */
# define __UX_OPT_SPN                  -1
/* spinlocks */
# define __UX_OPT_SPI                  -1
/* sporadic server */
# define __UX_OPT_SS                   -1
/* synchronised I/O */
# define __UX_OPT_SIO                  -1
/* thread stack address */
# define __UX_OPT_TSA                  -1
/* thread stack size */
# define __UX_OPT_TSS                  -1
/* thread CPU-time */
# define __UX_OPT_TCT                  -1
/* thread priority inheritance */
# define __UX_OPT_TPI                  -1
/* thread priority protection */
# define __UX_OPT_TPP                  -1
/* thread priority scheduling */
# define __UX_OPT_TPS                  -1
/* thread process-shared synchronisation */
# define __UX_OPT_TSH                  -1
/* thread-safe functions */
# define __UX_OPT_TSF                  __UX_POSIX_VERSION
/* thread sporadic server */
# define __UX_OPT_TSP                  -1
/* timeouts */
# define __UX_OPT_TMO                  -1
/* timers */
# define __UX_OPT_TMR                  -1
/* trace */
# define __UX_OPT_TRC                  -1
/* trace event filter */
# define __UX_OPT_TEF                  -1
/* trace inherit */
# define __UX_OPT_TRI                  -1
/* trace log */
# define __UX_OPT_TRL                  -1
/* typed memory objects */
# define __UX_OPT_TYM                  -1
/* C-language development */
# define __UX_OPT_CD                  -1
/* FORTRAN development */
# define __UX_OPT_FD                  -1
/* FORTRAN runtime */
# define __UX_OPT_FR                  -1
/* batch environment services */
# define __UX_OPT_BE                  -1
/* software development */
# define __UX_OPT_SD                  -1
/* user portability utilities */
# define __UX_OPT_UP                  -1
/* X/Open services */
# define __UX_OPT_XSI                 __UX_XOPEN_VERSION

#endif /*!__UX_FEATURES_H*/
