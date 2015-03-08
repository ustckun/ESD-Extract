* SPICE NETLIST

***************************************
.SUBCKT GGNMOS0 I gnd B
M0 gnd gnd I B n105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50 NM_test2
.ENDS
***************************************
.SUBCKT GGPMOS0 I vdd B
M1 vdd vdd I B p105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50 PM_test2
.ENDS
***************************************
.SUBCKT GCNMOS0 I gnd B
M3 a1 gnd I B n105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50 NM_test2
R0 a1 gnd rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 R_test2
C0 a1 I mom_2t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 C_test2
.ENDS
***************************************
.SUBCKT GCPMOS1 I vdd B
M4 a2 vdd I B p105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50 PM_test2
R1 a2 vdd rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 R_test2
C1 a2 I mom_2t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 C_test2
.ENDS
***************************************
.SUBCKT NPNBJT2 I gnd
Q0 I a3 gnd npn18a2d56ll_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 NPNBJT_test2
R2 a3 gnd rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 R_test2
.ENDS
***************************************
.SUBCKT PNPBJT3 vdd I
Q1 vdd a4 I pnp105a100ll_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 PNPBJT_test2
R3 vdd a4 rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600 R_test2
.ENDS
***************************************
.SUBCKT IC
X0 I gnd B GGNMOS0
X1 I vdd B GGPMOS0
X2 I gnd B GCNMOS0
X3 I vdd B GCPMOS1
X4 I gnd NPNBJT2
X5 vdd I PNPBJT3
.ENDS
***************************************