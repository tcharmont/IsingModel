#ifndef _PNL_CONFIG_H
#define _PNL_CONFIG_H
/* config.h.in.  Generated from cmake */

/* Define if a Fortran is detected */
/* #undef PNL_HAVE_FORTRAN_COMPILER */

/* Define to dummy 'main' function (if any) required to link to the Fortran
   libraries. */
/* #undef F77_DUMMY_MAIN */

/* Define to 1 if you have the 'exp10' function. */
#define PNL_HAVE_EXP10

/* Define to 1 if you have the 'finite' function. */
#define PNL_HAVE_FINITE

/* Define if you have inline */
#define PNL_HAVE_INLINE

/* Define keyword for declaring inline functions */
#define PNL_INLINE_DECL extern

/* Define keyword for defining inline functions */
#define PNL_INLINE_FUNC extern inline

/* Define to 1 if you have the 'isfinite' function. */
#define PNL_HAVE_ISFINITE

/* Define to 1 if you have the 'isinf' function. */
#define PNL_HAVE_ISINF

/* Define to 1 if you have the 'isnan' function. */
#define PNL_HAVE_ISNAN

/* Define to 1 if you have the 'lgamma' function. */
#define PNL_HAVE_LGAMMA

/* Define to 1 if you have the 'tgamma' function. */
#define PNL_HAVE_TGAMMA

/* Define to 1 if you have the 'trunc' function. */
#define PNL_HAVE_TRUNC

/* Define to 1 if you have the 'round' function. */
#define PNL_HAVE_ROUND

/* Define to 1 if you have 'dpstrf' function */
/* #undef PNL_HAVE_DPSTRF */

/* turn off range checking by default internally */
/* #undef PNL_RANGE_CHECK_OFF */

/* Runnning on Cygwin */
/* #undef _CYGWIN */

/* Running on a Win32 system */
/* #undef _WIN32 */

/* Define to 1 if you use internal Blas */
/* #undef USE_INTERNAL_BLAS */

/* Define to 1 not to build deprecated functions */
/* #undef WITHOUT_DEPRECATED */

#endif /* _PNL_CONFIG_H */

