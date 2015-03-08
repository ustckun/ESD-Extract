* SPICE NETLIST

***************************************
.SUBCKT GGNMOS A C B
** N=1 EP=0 IP=0 FDC=0
M0 C C A B n105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
.ENDS
***************************************
.SUBCKT GGPMOS A C B
** N=1 EP=0 IP=0 FDC=0
M1 C C A B p105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
.ENDS
***************************************
.SUBCKT GCNMOS A C B
** N=1 EP=0 IP=0 FDC=0
M3 a1 C A B n105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
C0 a1 A mom_2t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R0 a1 C rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
.ENDS
***************************************
.SUBCKT GCPMOS A C B
** N=1 EP=0 IP=0 FDC=0
M4 a2 C A B p105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
C1 a2 A mom_2t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R1 a2 C rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
.ENDS
***************************************
.SUBCKT NPNBJT A C
** N=1 EP=0 IP=0 FDC=0
Q0 A a3 C npn18a2d56ll_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R2 a3 C rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
.ENDS
***************************************
.SUBCKT PNPBJT A C
** N=1 EP=0 IP=0 FDC=0
Q1 C a4 A pnp105a100ll_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R3 C a4 rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
.ENDS
***************************************
.SUBCKT test2 gnd vdd I B
** N=10 EP=5 IP=54 FDC=128
X0 I gnd B GGNMOS L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
X1 I vdd B GGPMOS L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
X2 I gnd B GCNMOS L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
X3 I vdd B GCPMOS L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
X4 I gnd NPNBJT L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
X5 I vdd PNPBJT L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
.ENDS
***************************************