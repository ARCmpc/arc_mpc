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
static const int CASADI_PREFIX(s1)[] = {31, 1, 0, 31, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[] = {1, 8, 0, 1, 2, 3, 4, 4, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
static const int CASADI_PREFIX(s4)[] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
#define s4 CASADI_PREFIX(s4)
static const int CASADI_PREFIX(s5)[] = {6, 8, 0, 5, 9, 10, 11, 15, 18, 18, 18, 0, 1, 2, 3, 4, 0, 1, 3, 5, 0, 1, 0, 1, 2, 3, 0, 1, 3};
#define s5 CASADI_PREFIX(s5)
/* evaluate_stages */
int arc_solver_model_1(const arc_solver_FLOAT** arg, arc_solver_FLOAT** res) {
     arc_solver_FLOAT a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40;
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
  a6=arg[0] ? arg[0][5] : 0;
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
  a15=sq(a11);
         a17=arg[1] ? arg[1][8] : 0;
  a15=(a17*a15);
  a2=(a2+a15);
  a15=sq(a14);
         a18=arg[1] ? arg[1][9] : 0;
  a15=(a18*a15);
  a2=(a2+a15);
  a15=arg[1] ? arg[1][11] : 0;
  a15=(a0-a15);
         a19=cos(a6);
         a20=2.3558500000000002e+00;
  a19=(a20*a19);
         a21=2.;
  a19=(a19/a21);
  a15=(a15+a19);
  a19=sq(a15);
         a22=arg[1] ? arg[1][12] : 0;
  a22=(a4-a22);
         a23=sin(a6);
  a23=(a20*a23);
  a23=(a23/a21);
  a22=(a22+a23);
  a23=sq(a22);
  a19=(a19+a23);
  a23=arg[1] ? arg[1][13] : 0;
         a24=4.0000000000000002e-01;
  a23=(a23+a24);
  a23=sq(a23);
  a19=(a19-a23);
  a19=(-a19);
  a19=exp(a19);
  a23=arg[1] ? arg[1][26] : 0;
         a25=(a23*a19);
  a2=(a2+a25);
  a25=arg[1] ? arg[1][14] : 0;
  a25=(a0-a25);
         a26=cos(a6);
  a26=(a20*a26);
  a26=(a26/a21);
  a25=(a25+a26);
  a26=sq(a25);
         a27=arg[1] ? arg[1][15] : 0;
  a27=(a4-a27);
         a28=sin(a6);
  a28=(a20*a28);
  a28=(a28/a21);
  a27=(a27+a28);
  a28=sq(a27);
  a26=(a26+a28);
  a28=arg[1] ? arg[1][16] : 0;
  a28=(a28+a24);
  a28=sq(a28);
  a26=(a26-a28);
  a26=(-a26);
  a26=exp(a26);
  a28=arg[1] ? arg[1][27] : 0;
         a29=(a28*a26);
  a2=(a2+a29);
  a29=arg[1] ? arg[1][17] : 0;
  a29=(a0-a29);
         a30=cos(a6);
  a30=(a20*a30);
  a30=(a30/a21);
  a29=(a29+a30);
  a30=sq(a29);
         a31=arg[1] ? arg[1][18] : 0;
  a31=(a4-a31);
         a32=sin(a6);
  a32=(a20*a32);
  a32=(a32/a21);
  a31=(a31+a32);
  a32=sq(a31);
  a30=(a30+a32);
  a32=arg[1] ? arg[1][19] : 0;
  a32=(a32+a24);
  a32=sq(a32);
  a30=(a30-a32);
  a30=(-a30);
  a30=exp(a30);
  a32=arg[1] ? arg[1][28] : 0;
         a33=(a32*a30);
  a2=(a2+a33);
  a33=arg[1] ? arg[1][20] : 0;
  a33=(a0-a33);
         a34=cos(a6);
  a34=(a20*a34);
  a34=(a34/a21);
  a33=(a33+a34);
  a34=sq(a33);
         a35=arg[1] ? arg[1][21] : 0;
  a35=(a4-a35);
         a36=sin(a6);
  a36=(a20*a36);
  a36=(a36/a21);
  a35=(a35+a36);
  a36=sq(a35);
  a34=(a34+a36);
  a36=arg[1] ? arg[1][22] : 0;
  a36=(a36+a24);
  a36=sq(a36);
  a34=(a34-a36);
  a34=(-a34);
  a34=exp(a34);
  a36=arg[1] ? arg[1][29] : 0;
         a37=(a36*a34);
  a2=(a2+a37);
  a37=arg[1] ? arg[1][23] : 0;
  a37=(a0-a37);
         a38=cos(a6);
  a38=(a20*a38);
  a38=(a38/a21);
  a37=(a37+a38);
  a38=sq(a37);
         a39=arg[1] ? arg[1][24] : 0;
  a39=(a4-a39);
         a40=sin(a6);
  a40=(a20*a40);
  a40=(a40/a21);
  a39=(a39+a40);
  a40=sq(a39);
  a38=(a38+a40);
  a40=arg[1] ? arg[1][25] : 0;
  a40=(a40+a24);
  a40=sq(a40);
  a38=(a38-a40);
  a38=(-a38);
  a38=exp(a38);
  a40=arg[1] ? arg[1][30] : 0;
  a24=(a40*a38);
  a2=(a2+a24);
  if (res[0]!=0) res[0][0]=a2;
  a2=(a11+a11);
  a2=(a2*a17);
  a9=(a9+a9);
  a9=(a9*a13);
  a2=(a2-a9);
  if (res[1]!=0) res[1][0]=a2;
  a2=(a14+a14);
  a2=(a2*a18);
  a12=(a12+a12);
  a12=(a12*a16);
  a2=(a2-a12);
  if (res[1]!=0) res[1][1]=a2;
  a1=(a1+a1);
  a1=(a1*a3);
  a37=(a37+a37);
  a38=(a38*a40);
  a37=(a37*a38);
  a33=(a33+a33);
  a34=(a34*a36);
  a33=(a33*a34);
  a36=(a37+a33);
  a29=(a29+a29);
  a30=(a30*a32);
  a29=(a29*a30);
  a36=(a36+a29);
  a25=(a25+a25);
  a26=(a26*a28);
  a25=(a25*a26);
  a36=(a36+a25);
  a15=(a15+a15);
  a19=(a19*a23);
  a15=(a15*a19);
  a36=(a36+a15);
  a1=(a1-a36);
  if (res[1]!=0) res[1][2]=a1;
  a5=(a5+a5);
  a5=(a5*a7);
  a39=(a39+a39);
  a39=(a39*a38);
  a35=(a35+a35);
  a35=(a35*a34);
  a34=(a39+a35);
  a31=(a31+a31);
  a31=(a31*a30);
  a34=(a34+a31);
  a27=(a27+a27);
  a27=(a27*a26);
  a34=(a34+a27);
  a22=(a22+a22);
  a22=(a22*a19);
  a34=(a34+a22);
  a5=(a5-a34);
  if (res[1]!=0) res[1][3]=a5;
  a5=5.0000000000000000e-01;
  a37=(a5*a37);
  a37=(a20*a37);
  a34=sin(a6);
  a34=(a34*a37);
  a39=(a5*a39);
  a39=(a20*a39);
  a37=cos(a6);
  a37=(a37*a39);
  a34=(a34-a37);
  a35=(a5*a35);
  a35=(a20*a35);
  a37=cos(a6);
  a37=(a37*a35);
  a34=(a34-a37);
  a33=(a5*a33);
  a33=(a20*a33);
  a37=sin(a6);
  a37=(a37*a33);
  a34=(a34+a37);
  a31=(a5*a31);
  a31=(a20*a31);
  a37=cos(a6);
  a37=(a37*a31);
  a34=(a34-a37);
  a29=(a5*a29);
  a29=(a20*a29);
  a37=sin(a6);
  a37=(a37*a29);
  a34=(a34+a37);
  a27=(a5*a27);
  a27=(a20*a27);
  a37=cos(a6);
  a37=(a37*a27);
  a34=(a34-a37);
  a25=(a5*a25);
  a25=(a20*a25);
  a37=sin(a6);
  a37=(a37*a25);
  a34=(a34+a37);
  a22=(a5*a22);
  a22=(a20*a22);
  a37=cos(a6);
  a37=(a37*a22);
  a34=(a34-a37);
  a5=(a5*a15);
  a5=(a20*a5);
  a15=sin(a6);
  a15=(a15*a5);
  a34=(a34+a15);
  a8=(a8+a8);
  a8=(a8*a10);
  a34=(a34+a8);
  if (res[1]!=0) res[1][4]=a34;
  if (res[1]!=0) res[1][5]=a9;
  if (res[1]!=0) res[1][6]=a12;
  a12=cos(a6);
  a9=arg[0] ? arg[0][4] : 0;
  a34=(a9*a12);
  a8=1.0000000000000001e-01;
  a10=(a8*a11);
  a10=(a9+a10);
  a15=7.5000000000000000e-01;
  a5=(a14/a15);
  a37=tan(a5);
  a22=(a37*a9);
  a22=(a22/a20);
  a25=(a8*a22);
  a25=(a6+a25);
  a27=cos(a25);
  a29=(a10*a27);
  a29=(a21*a29);
  a34=(a34+a29);
  a29=(a8*a11);
  a29=(a9+a29);
  a31=(a14/a15);
  a33=tan(a31);
  a35=(a33*a10);
  a35=(a35/a20);
  a39=(a8*a35);
  a39=(a6+a39);
  a19=cos(a39);
  a26=(a29*a19);
  a26=(a21*a26);
  a34=(a34+a26);
  a26=2.0000000000000001e-01;
  a30=(a26*a11);
  a30=(a9+a30);
  a38=(a14/a15);
  a7=tan(a38);
  a1=(a7*a29);
  a1=(a1/a20);
  a36=(a26*a1);
  a36=(a6+a36);
  a23=cos(a36);
  a28=(a30*a23);
  a34=(a34+a28);
  a28=3.3333333333333333e-02;
  a34=(a28*a34);
  a0=(a0+a34);
  if (res[2]!=0) res[2][0]=a0;
  a0=sin(a6);
  a34=(a9*a0);
  a32=sin(a25);
  a40=(a10*a32);
  a40=(a21*a40);
  a34=(a34+a40);
  a40=sin(a39);
  a3=(a29*a40);
  a3=(a21*a3);
  a34=(a34+a3);
  a3=sin(a36);
  a2=(a30*a3);
  a34=(a34+a2);
  a34=(a28*a34);
  a4=(a4+a34);
  if (res[2]!=0) res[2][1]=a4;
  a4=(a21*a11);
  a4=(a11+a4);
  a34=(a21*a11);
  a4=(a4+a34);
  a4=(a4+a11);
  a4=(a28*a4);
  a4=(a9+a4);
  if (res[2]!=0) res[2][2]=a4;
  a35=(a21*a35);
  a22=(a22+a35);
  a1=(a21*a1);
  a22=(a22+a1);
  a15=(a14/a15);
  a1=tan(a15);
  a35=(a1*a30);
  a35=(a35/a20);
  a22=(a22+a35);
  a22=(a28*a22);
  a22=(a6+a22);
  if (res[2]!=0) res[2][3]=a22;
  if (res[2]!=0) res[2][4]=a11;
  if (res[2]!=0) res[2][5]=a14;
  a14=(a8*a27);
  a14=(a21*a14);
  a11=(a8*a19);
  a22=(a8*a33);
  a35=4.2447524248148222e-01;
  a22=(a35*a22);
  a20=(a8*a22);
  a4=sin(a39);
  a34=(a4*a20);
  a34=(a29*a34);
  a11=(a11-a34);
  a11=(a21*a11);
  a14=(a14+a11);
  a11=(a26*a23);
  a34=(a8*a7);
  a34=(a35*a34);
  a2=(a26*a34);
  a16=sin(a36);
  a18=(a16*a2);
  a18=(a30*a18);
  a11=(a11-a18);
  a14=(a14+a11);
  a14=(a28*a14);
  if (res[3]!=0) res[3][0]=a14;
  a14=(a8*a32);
  a14=(a21*a14);
  a11=(a8*a40);
  a39=cos(a39);
  a20=(a39*a20);
  a20=(a29*a20);
  a11=(a11+a20);
  a11=(a21*a11);
  a14=(a14+a11);
  a11=(a26*a3);
  a36=cos(a36);
  a2=(a36*a2);
  a2=(a30*a2);
  a11=(a11+a2);
  a14=(a14+a11);
  a14=(a28*a14);
  if (res[3]!=0) res[3][1]=a14;
  if (res[3]!=0) res[3][2]=a26;
  a22=(a21*a22);
  a34=(a21*a34);
  a22=(a22+a34);
  a34=(a26*a1);
  a34=(a35*a34);
  a22=(a22+a34);
  a22=(a28*a22);
  if (res[3]!=0) res[3][3]=a22;
  a22=1.;
  if (res[3]!=0) res[3][4]=a22;
  a5=cos(a5);
  a5=sq(a5);
  a34=1.3333333333333333e+00;
  a5=(a34/a5);
  a5=(a9*a5);
  a5=(a35*a5);
  a14=(a8*a5);
  a11=sin(a25);
  a2=(a11*a14);
  a2=(a10*a2);
  a2=(a21*a2);
  a31=cos(a31);
  a31=sq(a31);
  a31=(a34/a31);
  a31=(a10*a31);
  a31=(a35*a31);
  a20=(a8*a31);
  a18=(a4*a20);
  a18=(a29*a18);
  a18=(a21*a18);
  a2=(a2+a18);
  a38=cos(a38);
  a38=sq(a38);
  a38=(a34/a38);
  a38=(a29*a38);
  a38=(a35*a38);
  a18=(a26*a38);
  a13=(a16*a18);
  a13=(a30*a13);
  a2=(a2+a13);
  a2=(a28*a2);
  a2=(-a2);
  if (res[3]!=0) res[3][5]=a2;
  a25=cos(a25);
  a14=(a25*a14);
  a14=(a10*a14);
  a14=(a21*a14);
  a20=(a39*a20);
  a20=(a29*a20);
  a20=(a21*a20);
  a14=(a14+a20);
  a18=(a36*a18);
  a18=(a30*a18);
  a14=(a14+a18);
  a14=(a28*a14);
  if (res[3]!=0) res[3][6]=a14;
  a31=(a21*a31);
  a5=(a5+a31);
  a38=(a21*a38);
  a5=(a5+a38);
  a15=cos(a15);
  a15=sq(a15);
  a34=(a34/a15);
  a34=(a30*a34);
  a34=(a35*a34);
  a5=(a5+a34);
  a5=(a28*a5);
  if (res[3]!=0) res[3][7]=a5;
  if (res[3]!=0) res[3][8]=a22;
  if (res[3]!=0) res[3][9]=a22;
  if (res[3]!=0) res[3][10]=a22;
  a37=(a35*a37);
  a5=(a8*a37);
  a34=(a11*a5);
  a34=(a10*a34);
  a27=(a27-a34);
  a27=(a21*a27);
  a12=(a12+a27);
  a33=(a35*a33);
  a8=(a8*a33);
  a27=(a4*a8);
  a27=(a29*a27);
  a19=(a19-a27);
  a19=(a21*a19);
  a12=(a12+a19);
  a7=(a35*a7);
  a26=(a26*a7);
  a19=(a16*a26);
  a19=(a30*a19);
  a23=(a23-a19);
  a12=(a12+a23);
  a12=(a28*a12);
  if (res[3]!=0) res[3][11]=a12;
  a5=(a25*a5);
  a5=(a10*a5);
  a32=(a32+a5);
  a32=(a21*a32);
  a0=(a0+a32);
  a8=(a39*a8);
  a8=(a29*a8);
  a40=(a40+a8);
  a40=(a21*a40);
  a0=(a0+a40);
  a26=(a36*a26);
  a26=(a30*a26);
  a3=(a3+a26);
  a0=(a0+a3);
  a0=(a28*a0);
  if (res[3]!=0) res[3][12]=a0;
  if (res[3]!=0) res[3][13]=a22;
  a33=(a21*a33);
  a37=(a37+a33);
  a7=(a21*a7);
  a37=(a37+a7);
  a35=(a35*a1);
  a37=(a37+a35);
  a37=(a28*a37);
  if (res[3]!=0) res[3][14]=a37;
  a37=sin(a6);
  a37=(a9*a37);
  a11=(a10*a11);
  a11=(a21*a11);
  a37=(a37+a11);
  a4=(a29*a4);
  a4=(a21*a4);
  a37=(a37+a4);
  a16=(a30*a16);
  a37=(a37+a16);
  a37=(a28*a37);
  a37=(-a37);
  if (res[3]!=0) res[3][15]=a37;
  a6=cos(a6);
  a9=(a9*a6);
  a10=(a10*a25);
  a10=(a21*a10);
  a9=(a9+a10);
  a29=(a29*a39);
  a21=(a21*a29);
  a9=(a9+a21);
  a30=(a30*a36);
  a9=(a9+a30);
  a28=(a28*a9);
  if (res[3]!=0) res[3][16]=a28;
  if (res[3]!=0) res[3][17]=a22;
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
  if (sz_w) *sz_w = 41;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
