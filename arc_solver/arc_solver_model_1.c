/* This function was automatically generated by CasADi */#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) arc_solver_model_1_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#include "arc_solver/include/arc_solver.h"

#define PRINTF printf
arc_solver_FLOAT CASADI_PREFIX(sq)(arc_solver_FLOAT x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

arc_solver_FLOAT CASADI_PREFIX(sign)(arc_solver_FLOAT x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[] = {11, 1, 0, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[] = {1, 8, 0, 1, 2, 3, 4, 5, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
static const int CASADI_PREFIX(s4)[] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
#define s4 CASADI_PREFIX(s4)
static const int CASADI_PREFIX(s5)[] = {6, 8, 0, 5, 9, 10, 11, 15, 18, 18, 18, 0, 1, 2, 3, 4, 0, 1, 3, 5, 0, 1, 0, 1, 2, 3, 0, 1, 3};
#define s5 CASADI_PREFIX(s5)
/* evaluate_stages */
int arc_solver_model_1(const arc_solver_FLOAT** arg, arc_solver_FLOAT** res) {
     arc_solver_FLOAT a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37;
         a0=arg[0] ? arg[0][2] : 0;
         a1=arg[1] ? arg[1][0] : 0;
  a1=(a0-a1);
         a2=sq(a1);
         a3=arg[1] ? arg[1][3] : 0;
  a2=(a3*a2);
         a4=arg[0] ? arg[0][3] : 0;
         a5=arg[1] ? arg[1][1] : 0;
  a5=(a4-a5);
         a6=sq(a5);
         a7=arg[1] ? arg[1][4] : 0;
  a6=(a7*a6);
  a2=(a2+a6);
  a6=arg[0] ? arg[0][4] : 0;
         a8=arg[1] ? arg[1][2] : 0;
  a8=(a6-a8);
         a9=sq(a8);
         a10=arg[1] ? arg[1][5] : 0;
  a9=(a10*a9);
  a2=(a2+a9);
  a9=arg[0] ? arg[0][6] : 0;
         a11=arg[0] ? arg[0][0] : 0;
  a9=(a9-a11);
         a12=sq(a9);
         a13=arg[1] ? arg[1][6] : 0;
  a12=(a13*a12);
  a2=(a2+a12);
  a12=arg[0] ? arg[0][7] : 0;
         a14=arg[0] ? arg[0][1] : 0;
  a12=(a12-a14);
         a15=sq(a12);
         a16=arg[1] ? arg[1][7] : 0;
  a15=(a16*a15);
  a2=(a2+a15);
  a15=fabs(a11);
         a17=arg[1] ? arg[1][8] : 0;
  a15=(a17*a15);
  a2=(a2+a15);
  a15=fabs(a14);
         a18=arg[1] ? arg[1][9] : 0;
  a15=(a18*a15);
  a2=(a2+a15);
  if (res[0]!=0) res[0][0]=a2;
  a2=sign(a11);
  a2=(a2*a17);
  a9=(a9+a9);
  a9=(a9*a13);
  a2=(a2-a9);
  if (res[1]!=0) res[1][0]=a2;
  a2=sign(a14);
  a2=(a2*a18);
  a12=(a12+a12);
  a12=(a12*a16);
  a2=(a2-a12);
  if (res[1]!=0) res[1][1]=a2;
  a1=(a1+a1);
  a1=(a1*a3);
  if (res[1]!=0) res[1][2]=a1;
  a5=(a5+a5);
  a5=(a5*a7);
  if (res[1]!=0) res[1][3]=a5;
  a8=(a8+a8);
  a8=(a8*a10);
  if (res[1]!=0) res[1][4]=a8;
  if (res[1]!=0) res[1][5]=a9;
  if (res[1]!=0) res[1][6]=a12;
  a12=arg[0] ? arg[0][5] : 0;
  a9=cos(a12);
  a8=(a6*a9);
  a10=1.0000000000000001e-01;
  a5=(a10*a11);
  a5=(a6+a5);
  a7=tan(a14);
  a1=(a7*a6);
  a3=2.3558500000000002e+00;
  a1=(a1/a3);
  a2=(a10*a1);
  a2=(a12+a2);
  a16=cos(a2);
  a18=(a5*a16);
  a13=2.;
  a18=(a13*a18);
  a8=(a8+a18);
  a18=(a10*a11);
  a18=(a6+a18);
  a17=tan(a14);
  a15=(a17*a5);
  a15=(a15/a3);
         a19=(a10*a15);
  a19=(a12+a19);
         a20=cos(a19);
         a21=(a18*a20);
  a21=(a13*a21);
  a8=(a8+a21);
  a21=2.0000000000000001e-01;
         a22=(a21*a11);
  a22=(a6+a22);
         a23=tan(a14);
         a24=(a23*a18);
  a24=(a24/a3);
         a25=(a21*a24);
  a25=(a12+a25);
         a26=cos(a25);
         a27=(a22*a26);
  a8=(a8+a27);
  a27=3.3333333333333333e-02;
  a8=(a27*a8);
  a0=(a0+a8);
  if (res[2]!=0) res[2][0]=a0;
  a0=sin(a12);
  a8=(a6*a0);
         a28=sin(a2);
         a29=(a5*a28);
  a29=(a13*a29);
  a8=(a8+a29);
  a29=sin(a19);
         a30=(a18*a29);
  a30=(a13*a30);
  a8=(a8+a30);
  a30=sin(a25);
         a31=(a22*a30);
  a8=(a8+a31);
  a8=(a27*a8);
  a4=(a4+a8);
  if (res[2]!=0) res[2][1]=a4;
  a4=(a13*a11);
  a4=(a11+a4);
  a8=(a13*a11);
  a4=(a4+a8);
  a4=(a4+a11);
  a4=(a27*a4);
  a4=(a6+a4);
  if (res[2]!=0) res[2][2]=a4;
  a15=(a13*a15);
  a1=(a1+a15);
  a24=(a13*a24);
  a1=(a1+a24);
  a24=tan(a14);
  a15=(a24*a22);
  a15=(a15/a3);
  a1=(a1+a15);
  a1=(a27*a1);
  a1=(a12+a1);
  if (res[2]!=0) res[2][3]=a1;
  if (res[2]!=0) res[2][4]=a11;
  if (res[2]!=0) res[2][5]=a14;
  a11=(a10*a16);
  a11=(a13*a11);
  a1=(a10*a20);
  a15=(a10*a17);
  a3=4.2447524248148222e-01;
  a15=(a3*a15);
  a4=(a10*a15);
  a8=sin(a19);
  a31=(a8*a4);
  a31=(a18*a31);
  a1=(a1-a31);
  a1=(a13*a1);
  a11=(a11+a1);
  a1=(a21*a26);
  a31=(a10*a23);
  a31=(a3*a31);
         a32=(a21*a31);
         a33=sin(a25);
         a34=(a33*a32);
  a34=(a22*a34);
  a1=(a1-a34);
  a11=(a11+a1);
  a11=(a27*a11);
  if (res[3]!=0) res[3][0]=a11;
  a11=(a10*a28);
  a11=(a13*a11);
  a1=(a10*a29);
  a19=cos(a19);
  a4=(a19*a4);
  a4=(a18*a4);
  a1=(a1+a4);
  a1=(a13*a1);
  a11=(a11+a1);
  a1=(a21*a30);
  a25=cos(a25);
  a32=(a25*a32);
  a32=(a22*a32);
  a1=(a1+a32);
  a11=(a11+a1);
  a11=(a27*a11);
  if (res[3]!=0) res[3][1]=a11;
  if (res[3]!=0) res[3][2]=a21;
  a15=(a13*a15);
  a31=(a13*a31);
  a15=(a15+a31);
  a31=(a21*a24);
  a31=(a3*a31);
  a15=(a15+a31);
  a15=(a27*a15);
  if (res[3]!=0) res[3][3]=a15;
  a15=1.;
  if (res[3]!=0) res[3][4]=a15;
  a31=cos(a14);
  a31=sq(a31);
  a31=(a6/a31);
  a31=(a3*a31);
  a11=(a10*a31);
  a1=sin(a2);
  a32=(a1*a11);
  a32=(a5*a32);
  a32=(a13*a32);
  a4=cos(a14);
  a4=sq(a4);
  a4=(a5/a4);
  a4=(a3*a4);
  a34=(a10*a4);
         a35=(a8*a34);
  a35=(a18*a35);
  a35=(a13*a35);
  a32=(a32+a35);
  a35=cos(a14);
  a35=sq(a35);
  a35=(a18/a35);
  a35=(a3*a35);
         a36=(a21*a35);
         a37=(a33*a36);
  a37=(a22*a37);
  a32=(a32+a37);
  a32=(a27*a32);
  a32=(-a32);
  if (res[3]!=0) res[3][5]=a32;
  a2=cos(a2);
  a11=(a2*a11);
  a11=(a5*a11);
  a11=(a13*a11);
  a34=(a19*a34);
  a34=(a18*a34);
  a34=(a13*a34);
  a11=(a11+a34);
  a36=(a25*a36);
  a36=(a22*a36);
  a11=(a11+a36);
  a11=(a27*a11);
  if (res[3]!=0) res[3][6]=a11;
  a4=(a13*a4);
  a31=(a31+a4);
  a35=(a13*a35);
  a31=(a31+a35);
  a14=cos(a14);
  a14=sq(a14);
  a14=(a22/a14);
  a14=(a3*a14);
  a31=(a31+a14);
  a31=(a27*a31);
  if (res[3]!=0) res[3][7]=a31;
  if (res[3]!=0) res[3][8]=a15;
  if (res[3]!=0) res[3][9]=a15;
  if (res[3]!=0) res[3][10]=a15;
  a7=(a3*a7);
  a31=(a10*a7);
  a14=(a1*a31);
  a14=(a5*a14);
  a16=(a16-a14);
  a16=(a13*a16);
  a9=(a9+a16);
  a17=(a3*a17);
  a10=(a10*a17);
  a16=(a8*a10);
  a16=(a18*a16);
  a20=(a20-a16);
  a20=(a13*a20);
  a9=(a9+a20);
  a23=(a3*a23);
  a21=(a21*a23);
  a20=(a33*a21);
  a20=(a22*a20);
  a26=(a26-a20);
  a9=(a9+a26);
  a9=(a27*a9);
  if (res[3]!=0) res[3][11]=a9;
  a31=(a2*a31);
  a31=(a5*a31);
  a28=(a28+a31);
  a28=(a13*a28);
  a0=(a0+a28);
  a10=(a19*a10);
  a10=(a18*a10);
  a29=(a29+a10);
  a29=(a13*a29);
  a0=(a0+a29);
  a21=(a25*a21);
  a21=(a22*a21);
  a30=(a30+a21);
  a0=(a0+a30);
  a0=(a27*a0);
  if (res[3]!=0) res[3][12]=a0;
  if (res[3]!=0) res[3][13]=a15;
  a17=(a13*a17);
  a7=(a7+a17);
  a23=(a13*a23);
  a7=(a7+a23);
  a3=(a3*a24);
  a7=(a7+a3);
  a7=(a27*a7);
  if (res[3]!=0) res[3][14]=a7;
  a7=sin(a12);
  a7=(a6*a7);
  a1=(a5*a1);
  a1=(a13*a1);
  a7=(a7+a1);
  a8=(a18*a8);
  a8=(a13*a8);
  a7=(a7+a8);
  a33=(a22*a33);
  a7=(a7+a33);
  a7=(a27*a7);
  a7=(-a7);
  if (res[3]!=0) res[3][15]=a7;
  a12=cos(a12);
  a6=(a6*a12);
  a5=(a5*a2);
  a5=(a13*a5);
  a6=(a6+a5);
  a18=(a18*a19);
  a13=(a13*a18);
  a6=(a6+a13);
  a22=(a22*a25);
  a6=(a6+a22);
  a27=(a27*a6);
  if (res[3]!=0) res[3][16]=a27;
  if (res[3]!=0) res[3][17]=a15;
  return 0;
}

int arc_solver_model_1_init(int *f_type, int *n_in, int *n_out, int *sz_arg, int* sz_res) {
  *f_type = 1;
  *n_in = 2;
  *n_out = 4;
  *sz_arg = 2;
  *sz_res = 4;
  return 0;
}

int arc_solver_model_1_sparsity(int i, int *nrow, int *ncol, const int **colind, const int **row) {
  const int* s;
  switch (i) {
    case 0:
      s = s0; break;
    case 1:
      s = s1; break;
    case 2:
      s = s2; break;
    case 3:
      s = s3; break;
    case 4:
      s = s4; break;
    case 5:
      s = s5; break;
    default:
      return 1;
  }

  *nrow = s[0];
  *ncol = s[1];
  *colind = s + 2;
  *row = s + 2 + (*ncol + 1);
  return 0;
}

int arc_solver_model_1_work(int *sz_iw, int *sz_w) {
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 38;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif