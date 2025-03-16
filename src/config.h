/* config.h.in.  Generated from configure.ac by autoheader.  */

/* for X68000, using libc or XClib */
#ifdef human68k
#undef X68LIBC
#define X68XC
#endif /* human68k */

/* Define to 1 if the `closedir' function returns void instead of int. */
#define CLOSEDIR_VOID	1

/* Define to include ANSI arrow keys support. */
#undef CONFIG_ANSI_ARROWS

/* Define to enable EOF (Ctrl-D) key. */
#undef CONFIG_EOF

/* Define to enable SIGINT (Ctrl-C) key. */
#undef CONFIG_SIGINT

/* Define to enable SIGSTOP (Ctrl-Z) key. */
#undef CONFIG_SIGSTOP

/* Define to enable terminal bell on completion. */
#undef CONFIG_TERMINAL_BELL

/* Define to skip duplicate lines in the scrollback history. */
#undef CONFIG_UNIQUE_HISTORY

/* Define to use the termcap library for terminal size. */
#undef CONFIG_USE_TERMCAP

/* Define to 1 if `TIOCGWINSZ' requires <sys/ioctl.h>. */
#undef GWINSZ_IN_SYS_IOCTL

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'. */
#if defined(X68LIBC)
#define HAVE_DIRENT_H	1
#elif defined(X68XC)
#undef HAVE_DIRENT_H
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the `curses' library (-lcurses). */
#undef HAVE_LIBCURSES

/* Define to 1 if you have the `ncurses' library (-lncurses). */
#undef HAVE_LIBNCURSES

/* Define to 1 if you have the `termcap' library (-ltermcap). */
#undef HAVE_LIBTERMCAP

/* Define to 1 if you have the `terminfo' library (-lterminfo). */
#undef HAVE_LIBTERMINFO

/* Define to 1 if you have the `tinfo' library (-ltinfo). */
#undef HAVE_LIBTINFO

/* Define to 1 if you have the <malloc.h> header file. */
#if defined(X68LIBC)
#define HAVE_MALLOC_H 1
#elif defined(X68XC)
#undef HAVE_MALLOC_H
#endif

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the `perror' function. */
#undef HAVE_PERROR

/* Define to 1 if you have the <sgtty.h> header file. */
#undef HAVE_SGTTY_H

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
#undef HAVE_STAT_EMPTY_STRING_BUG

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H	1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H	1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR	1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP	1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H	1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR	1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H	1

/* Define to 1 if you have the <sys/types.h> header file. */
#if defined(X68LIBC)
#define HAVE_SYS_TYPES_H	1
#elif defined(X68XC)
#undef HAVE_SYS_TYPES_H
#endif

/* Define to 1 if you have the `tcgetattr' function. */
#undef HAVE_TCGETATTR

/* Define to 1 if you have the <termcap.h> header file. */
#undef HAVE_TERMCAP_H

/* Define to 1 if you have the <termios.h> header file. */
#undef HAVE_TERMIOS_H
/* #define HAVE_TERMIOS_H	1 */

/* Define to 1 if you have the <termio.h> header file. */
#undef HAVE_TERMIO_H

/* Define to 1 if you have the <unistd.h> header file. */
#if defined(X68LIBC)
#define HAVE_UNISTD_H	1
#elif defined(X68XC)
#undef HAVE_UNISTD_H
#endif

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#undef LSTAT_FOLLOWS_SLASHED_SYMLINK

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
#undef STAT_MACROS_BROKEN

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#undef STDC_HEADERS

/* Default to UNIX backend, should be detected. */
#define SYS_UNIX

/* Version number of package */
#undef VERSION

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t
