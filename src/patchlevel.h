#ifndef PATCHLEVEL_H__
#define PATCHLEVEL_H__ 1

/*--------------------------------------------------------------------------
 * Various version numbers and strings, collected here so that PRCS has
 * to change only one file.
 *--------------------------------------------------------------------------
 */

/* $Format: "#if $ReleaseMinor$ % 2 == 0"$ */
#if 3 % 2 == 0
#    define IS_STABLE 1
#else
#    define IS_DEVELOPMENT 1
#endif

/* $Format: "#define IS_RELEASE() (!strcmp(\"$ReleaseType$\", \"rel\"))"$ */
#define IS_RELEASE() (!strcmp("dev", "rel"))

/* $Format: "#define RELEASE_DATE \"$ProjectDate$\""$ */
#define RELEASE_DATE "Mon, 26 Apr 2004 19:49:51 -0600"

/* $Format: "#define PROJ_VERSION \"$ProjectVersion$\""$ */
#define PROJ_VERSION "3-3.532"

#if IS_STABLE

/* $Format: "#define GAME_VERSION \"$ReleaseVersion$\""$ */
#define GAME_VERSION "3.3.0"

/* $Format: "#define LONG_VERSION \"$ReleaseVersion$-$ReleaseType$.$ProjectMinorVersion$\""$ */
#define LONG_VERSION "3.3.0-dev.532"

#else

/* $Format: "#define GAME_VERSION \"$DevelopmentVersion$\""$ */
#define GAME_VERSION "3.3.532"

/* $Format: "#define LONG_VERSION \"$DevelopmentVersion$\""$ */
#define LONG_VERSION "3.3.532"

#endif

/* $Format: "#define VERSION_MAJOR \"$ReleaseMajor$\""$ */
#define VERSION_MAJOR "3"

/* $Format: "#define VERSION_MINOR \"$ReleaseMinor$\""$ */
#define VERSION_MINOR "3"

/* $Format: "#define VERSION_MICRO \"$ReleaseMicro$\""$ */
#define VERSION_MICRO "0"

/* $Format: "#define VERSION_PATCH \"$ProjectMinorVersion$\""$ */
#define VERSION_PATCH "532"

/* $Format: "#define LOCAL_LEVEL \"\""$ */
#define LOCAL_LEVEL ""

/* $Format: "#define RELEASE_TYPE \"$ReleaseType$\""$ */
#define RELEASE_TYPE "dev"

/* TODO: Add something like the perl local patchlevel management. */
/* TODO: Add LPC defines for the various version number parts */

#endif /* PATCHLEVEL_H__ */

