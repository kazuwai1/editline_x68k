/* Editline system header file for Unix.
 *
 * Copyright (c) 1992, 1993  Simmule Turner and Rich Salz
 * All rights reserved.
 *
 * This software is not subject to any license of the American Telephone
 * and Telegraph Company or of the Regents of the University of California.
 *
 * Permission is granted to anyone to use this software for any purpose on
 * any computer system, and to alter it and redistribute it freely, subject
 * to the following restrictions:
 * 1. The authors are not responsible for the consequences of use of this
 *    software, no matter how awful, even if they arise from flaws in it.
 * 2. The origin of this software must not be misrepresented, either by
 *    explicit claim or by omission.  Since few users ever read sources,
 *    credits must appear in the documentation.
 * 3. Altered versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.  Since few users
 *    ever read sources, credits must appear in the documentation.
 * 4. This notice may not be removed or altered.
 */

#ifndef EDITLINE_UNIX_H_
#define EDITLINE_UNIX_H_

#define CRLF		"\r\n"
#define FORWARD		STATIC

#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
#ifdef HAVE_SYS_STAT_H
#if !defined(human68k) || defined(X68LIBC)
#include <sys/stat.h>
#elif defined(X68XC)
#include <stat.h>
#endif
#endif /* HAVE_SYS_STAT_H */
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifdef HAVE_DIRENT_H
#include <dirent.h>
typedef struct dirent	DIRENTRY;
#endif

#ifdef human68k	/* for X68000 */
/* ssize_t is not defined in X68000's LIBC/XCLIB */
typedef int	ssize_t;
#endif

#endif /* EDITLINE_UNIX_H_ */
