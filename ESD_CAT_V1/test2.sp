* SPICE NETLIST
***************************************

.SUBCKT test2 gnd vdd I B
** N=10 EP=5 IP=54 FDC=128
M0 gnd gnd I B n105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
M1 vdd vdd I B p105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
M3 a1 gnd I B n105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
C0 a1 I mom_2t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R0 a1 gnd rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
M4 a2 vdd I B p105ll_ckt L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
C1 a2 I mom_2t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R1 a2 vdd rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
Q0 I a3 gnd npn18a2d56ll_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R2 a3 gnd rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
Q1 vdd a4 I pnp105a100ll_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
R3 vdd a4 rpdifsab_3t_ckt $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
.ENDS
***************************************