/* cgttrs.f -- translated by f2c (version 20061008).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "pnl/pnl_f2c.h"

/* Table of constant values */

static int c__1 = 1;
static int c_n1 = -1;

 int cgttrs_(char *trans, int *n, int *nrhs, complex *
	dl, complex *d__, complex *du, complex *du2, int *ipiv, complex *
	b, int *ldb, int *info)
{
    /* System generated locals */
    int b_dim1, b_offset, i__1, i__2, i__3;

    /* Local variables */
    int j, jb, nb;
    extern  int cgtts2_(int *, int *, int *, 
	    complex *, complex *, complex *, complex *, int *, complex *, 
	    int *), xerbla_(char *, int *);
    extern int ilaenv_(int *, char *, char *, int *, int *, 
	    int *, int *);
    int itrans;
    int notran;


/*  -- LAPACK routine (version 3.2) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     November 2006 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  CGTTRS solves one of the systems of equations */
/*     A * X = B,  A**T * X = B,  or  A**H * X = B, */
/*  with a tridiagonal matrix A using the LU factorization computed */
/*  by CGTTRF. */

/*  Arguments */
/*  ========= */

/*  TRANS   (input) CHARACTER*1 */
/*          Specifies the form of the system of equations. */
/*          = 'N':  A * X = B     (No transpose) */
/*          = 'T':  A**T * X = B  (Transpose) */
/*          = 'C':  A**H * X = B  (Conjugate transpose) */

/*  N       (input) INTEGER */
/*          The order of the matrix A. */

/*  NRHS    (input) INTEGER */
/*          The number of right hand sides, i.e., the number of columns */
/*          of the matrix B.  NRHS >= 0. */

/*  DL      (input) COMPLEX array, dimension (N-1) */
/*          The (n-1) multipliers that define the matrix L from the */
/*          LU factorization of A. */

/*  D       (input) COMPLEX array, dimension (N) */
/*          The n diagonal elements of the upper triangular matrix U from */
/*          the LU factorization of A. */

/*  DU      (input) COMPLEX array, dimension (N-1) */
/*          The (n-1) elements of the first super-diagonal of U. */

/*  DU2     (input) COMPLEX array, dimension (N-2) */
/*          The (n-2) elements of the second super-diagonal of U. */

/*  IPIV    (input) INTEGER array, dimension (N) */
/*          The pivot indices; for 1 <= i <= n, row i of the matrix was */
/*          interchanged with row IPIV(i).  IPIV(i) will always be either */
/*          i or i+1; IPIV(i) = i indicates a row interchange was not */
/*          required. */

/*  B       (input/output) COMPLEX array, dimension (LDB,NRHS) */
/*          On entry, the matrix of right hand side vectors B. */
/*          On exit, B is overwritten by the solution vectors X. */

/*  LDB     (input) INTEGER */
/*          The leading dimension of the array B.  LDB >= MAX(1,N). */

/*  INFO    (output) INTEGER */
/*          = 0:  successful exit */
/*          < 0:  if INFO = -k, the k-th argument had an illegal value */

/*  ===================================================================== */

/*     .. Local Scalars .. */
/*     .. */
/*     .. External Functions .. */
/*     .. */
/*     .. External Subroutines .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
/*     .. Executable Statements .. */

    /* Parameter adjustments */
    --dl;
    --d__;
    --du;
    --du2;
    --ipiv;
    b_dim1 = *ldb;
    b_offset = 1 + b_dim1;
    b -= b_offset;

    /* Function Body */
    *info = 0;
    notran = *(unsigned char *)trans == 'N' || *(unsigned char *)trans == 'n';
    if (! notran && ! (*(unsigned char *)trans == 'T' || *(unsigned char *)
	    trans == 't') && ! (*(unsigned char *)trans == 'C' || *(unsigned 
	    char *)trans == 'c')) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*nrhs < 0) {
	*info = -3;
    } else if (*ldb < MAX(*n,1)) {
	*info = -10;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("CGTTRS", &i__1);
	return 0;
    }

/*     Quick return if possible */

    if (*n == 0 || *nrhs == 0) {
	return 0;
    }

/*     Decode TRANS */

    if (notran) {
	itrans = 0;
    } else if (*(unsigned char *)trans == 'T' || *(unsigned char *)trans == 
	    't') {
	itrans = 1;
    } else {
	itrans = 2;
    }

/*     Determine the number of right-hand sides to solve at a time. */

    if (*nrhs == 1) {
	nb = 1;
    } else {
/* Computing MAX */
	i__1 = 1, i__2 = ilaenv_(&c__1, "CGTTRS", trans, n, nrhs, &c_n1, &
		c_n1);
	nb = MAX(i__1,i__2);
    }

    if (nb >= *nrhs) {
	cgtts2_(&itrans, n, nrhs, &dl[1], &d__[1], &du[1], &du2[1], &ipiv[1], 
		&b[b_offset], ldb);
    } else {
	i__1 = *nrhs;
	i__2 = nb;
	for (j = 1; i__2 < 0 ? j >= i__1 : j <= i__1; j += i__2) {
/* Computing MIN */
	    i__3 = *nrhs - j + 1;
	    jb = MIN(i__3,nb);
	    cgtts2_(&itrans, n, &jb, &dl[1], &d__[1], &du[1], &du2[1], &ipiv[
		    1], &b[j * b_dim1 + 1], ldb);
/* L10: */
	}
    }

/*     End of CGTTRS */

    return 0;
} /* cgttrs_ */