* SPICE NETLIST
***************************************

.SUBCKT cfmom PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT cfmom_wo PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT cfmom_2t PLUS MINUS
.ENDS
***************************************
.SUBCKT cfmom_wo_rf PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT cfmom_mx_4t PLUS1 MINUS1 PLUS2 MINUS2
.ENDS
***************************************
.SUBCKT cfmom_mx PLUS1 MINUS1 PLUS2 MINUS2 BULK
.ENDS
***************************************
.SUBCKT cfmom_wo_mx PLUS1 MINUS1 PLUS2 MINUS2 BULK
.ENDS
***************************************
.SUBCKT dmoscap_rf18_nw GATE1 GATE2 BULK GNODE
.ENDS
***************************************
.SUBCKT moscap_rf PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT moscap_rf15_nw PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT moscap_rf18 PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT moscap_rf18_nw PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT moscap_rf25 PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT moscap_rf25_nw PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT moscap_rf_nw PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT ndio_hia_mac PLUS MINUS
.ENDS
***************************************
.SUBCKT nmoscap PLUS MINUS
.ENDS
***************************************
.SUBCKT nmoscap_15 PLUS MINUS
.ENDS
***************************************
.SUBCKT nmoscap_18 PLUS MINUS
.ENDS
***************************************
.SUBCKT nmoscap_25 PLUS MINUS
.ENDS
***************************************
.SUBCKT nmoscap_33 PLUS MINUS
.ENDS
***************************************
.SUBCKT nmoscap_edc PLUS MINUS
.ENDS
***************************************
.SUBCKT pdio_hia_mac PLUS MINUS
.ENDS
***************************************
.SUBCKT pmoscap PLUS MINUS
.ENDS
***************************************
.SUBCKT pmoscap_18 PLUS MINUS
.ENDS
***************************************
.SUBCKT pmoscap_25 PLUS MINUS
.ENDS
***************************************
.SUBCKT probe1 TOP BULK
.ENDS
***************************************
.SUBCKT probe2 TOP BULK
.ENDS
***************************************
.SUBCKT probe3 TOP BULK
.ENDS
***************************************
.SUBCKT probe4 TOP BULK
.ENDS
***************************************
.SUBCKT probe5 TOP BULK
.ENDS
***************************************
.SUBCKT probe6 TOP BULK
.ENDS
***************************************
.SUBCKT probe7 TOP BULK
.ENDS
***************************************
.SUBCKT probe8 TOP BULK
.ENDS
***************************************
.SUBCKT rm10w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm1w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm2w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm3w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm4w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm5w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm6w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm7w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm8w PLUS MINUS
.ENDS
***************************************
.SUBCKT rm9w PLUS MINUS
.ENDS
***************************************
.SUBCKT rmap PLUS MINUS
.ENDS
***************************************
.SUBCKT rnmg PLUS MINUS
.ENDS
***************************************
.SUBCKT rnmg_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rnodl PLUS MINUS
.ENDS
***************************************
.SUBCKT rnodl_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rnods PLUS MINUS
.ENDS
***************************************
.SUBCKT rnods_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rnodwo PLUS MINUS
.ENDS
***************************************
.SUBCKT rnodwo_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rnwod PLUS MINUS
.ENDS
***************************************
.SUBCKT rnwod_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rnwsti PLUS MINUS
.ENDS
***************************************
.SUBCKT rnwsti_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rpmg PLUS MINUS
.ENDS
***************************************
.SUBCKT rpmg_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rpodl PLUS MINUS
.ENDS
***************************************
.SUBCKT rpodl_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rpods PLUS MINUS
.ENDS
***************************************
.SUBCKT rpods_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rpodwo PLUS MINUS
.ENDS
***************************************
.SUBCKT rpodwo_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT rupolym PLUS MINUS
.ENDS
***************************************
.SUBCKT rupolym_m PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT spiral_sym PLUS MINUS BULK
.ENDS
***************************************
.SUBCKT spiral_sym_ct_lc PLUS MINUS BULK CTAP
.ENDS
***************************************
.SUBCKT spiral_sym_ct_rl PLUS MINUS BULK CTAP
.ENDS
***************************************
.SUBCKT pad_stack_new
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_25
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_24
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_23
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_22
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_21
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_20
** N=3 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT Diode_Nplus_IO_mode_V2
** N=2 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_19 1 2 3
** N=3 EP=3 IP=9 FDC=4
D0 3 1 ndio_18 AREA=1.08e-11 PJ=4.108e-05 $X=671850 $Y=568650 $D=161
D1 3 2 ndio_18 AREA=1.08e-11 PJ=4.108e-05 $X=671850 $Y=837900 $D=161
D2 3 1 ndio_18 AREA=1.08e-11 PJ=4.108e-05 $X=685650 $Y=568650 $D=161
D3 3 2 ndio_18 AREA=1.08e-11 PJ=4.108e-05 $X=685650 $Y=837900 $D=161
.ENDS
***************************************
.SUBCKT ICV_18
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_17
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_16
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_15
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_14
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_13
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT Diode_Nplus_IO_mode_V2_0
** N=2 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT Diode_Nplus_IO_2kV_V2 1 2
** N=2 EP=2 IP=6 FDC=3
D0 1 2 ndio_18 AREA=1.08e-11 PJ=4.108e-05 $X=827300 $Y=447300 $D=161
D1 1 2 ndio_18 AREA=1.08e-11 PJ=4.108e-05 $X=841100 $Y=447300 $D=161
D2 1 2 ndio_18 AREA=1.08e-11 PJ=4.108e-05 $X=854900 $Y=447300 $D=161
.ENDS
***************************************
.SUBCKT ICV_12 1 3
** N=5 EP=2 IP=3 FDC=3
X1 3 1 Diode_Nplus_IO_2kV_V2 $T=2306800 -727400 0 90 $X=1634400 $Y=76100
.ENDS
***************************************
.SUBCKT Diode_Pplus_IO_mode_V2
** N=3 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT Diode_Pplus_IO_2kV_V2 1 2
** N=3 EP=2 IP=9 FDC=3
D0 2 1 pdio_18 AREA=1.08e-11 PJ=4.108e-05 $X=827300 $Y=447300 $D=194
D1 2 1 pdio_18 AREA=1.08e-11 PJ=4.108e-05 $X=841100 $Y=447300 $D=194
D2 2 1 pdio_18 AREA=1.08e-11 PJ=4.108e-05 $X=854900 $Y=447300 $D=194
.ENDS
***************************************
.SUBCKT ICV_11 1 3
** N=4 EP=2 IP=4 FDC=3
X1 3 1 Diode_Pplus_IO_2kV_V2 $T=2307900 -479650 0 90 $X=1635500 $Y=323850
.ENDS
***************************************
.SUBCKT ICV_10
** N=2 EP=0 IP=1 FDC=0
.ENDS
***************************************
.SUBCKT ICV_53
** N=3 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT nch_18_mac_3 1 2 3
** N=7 EP=3 IP=0 FDC=1
M0 2 3 1 1 nch_18_mac L=3e-07 W=0.001 nf=125 $X=-50 $Y=0 $D=4
.ENDS
***************************************
.SUBCKT ICV_52 2 3 4
** N=4 EP=3 IP=3 FDC=1
X0 2 3 4 nch_18_mac_3 $T=-1299650 -487100 0 0 $X=-1305250 $Y=-488900
.ENDS
***************************************
.SUBCKT M1_PO_82
** N=12 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_51
** N=4 EP=0 IP=250 FDC=0
.ENDS
***************************************
.SUBCKT ICV_50 1 3
** N=13 EP=2 IP=400 FDC=1
X0 1 3 rnmg l=3e-07 w=4e-07 $X=-614600 $Y=-224550 $D=1089
.ENDS
***************************************
.SUBCKT pch_18_mac_4 1 2 4
** N=6 EP=3 IP=0 FDC=1
M0 2 4 1 2 pch_18_mac L=3e-07 W=0.0007 nf=100 $X=-50 $Y=0 $D=98
.ENDS
***************************************
.SUBCKT ICV_49 1 2 3
** N=8 EP=3 IP=6 FDC=1
X0 2 1 3 pch_18_mac_4 $T=-1273100 -80350 1 0 $X=-1278700 $Y=-152550
.ENDS
***************************************
.SUBCKT ICV_48
** N=4 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_26 1 2 3
** N=8 EP=3 IP=6 FDC=1
X0 1 2 3 pch_18_mac_4 $T=0 0 0 0 $X=-5600 $Y=-2200
.ENDS
***************************************
.SUBCKT rupolym_0 1 2
** N=11 EP=2 IP=0 FDC=1
X0 1 2 rupolym l=2.07e-05 w=4e-07 $X=1800 $Y=0 $D=1109
.ENDS
***************************************
.SUBCKT ICV_44 1 2 3 4
** N=5 EP=4 IP=6 FDC=2
X0 1 3 rupolym_0 $T=-604400 -220800 1 0 $X=-606300 $Y=-230100
X1 2 4 rupolym_0 $T=-604400 -198150 1 0 $X=-606300 $Y=-207450
.ENDS
***************************************
.SUBCKT ICV_47
** N=2 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_46
** N=3 EP=0 IP=76 FDC=0
.ENDS
***************************************
.SUBCKT ICV_45
** N=3 EP=0 IP=76 FDC=0
.ENDS
***************************************
.SUBCKT ncap_IO_cell 1 2
** N=7 EP=2 IP=0 FDC=1
X0 2 1 nmoscap_18 lr=4e-07 wr=7.335e-06 $X=0 $Y=300 $D=1062
.ENDS
***************************************
.SUBCKT ICV_43 2 3
** N=3 EP=2 IP=30 FDC=15
X0 2 3 ncap_IO_cell $T=-599100 -153200 0 0 $X=-602500 $Y=-160600
X1 2 3 ncap_IO_cell $T=-586100 -153200 0 0 $X=-589500 $Y=-160600
X2 2 3 ncap_IO_cell $T=-573100 -153200 0 0 $X=-576500 $Y=-160600
X3 2 3 ncap_IO_cell $T=-560100 -153200 0 0 $X=-563500 $Y=-160600
X4 2 3 ncap_IO_cell $T=-547100 -153200 0 0 $X=-550500 $Y=-160600
X5 2 3 ncap_IO_cell $T=-534100 -153200 0 0 $X=-537500 $Y=-160600
X6 2 3 ncap_IO_cell $T=-521100 -153200 0 0 $X=-524500 $Y=-160600
X7 2 3 ncap_IO_cell $T=-508100 -153200 0 0 $X=-511500 $Y=-160600
X8 2 3 ncap_IO_cell $T=-495100 -153200 0 0 $X=-498500 $Y=-160600
X9 2 3 ncap_IO_cell $T=-482100 -153200 0 0 $X=-485500 $Y=-160600
X10 2 3 ncap_IO_cell $T=-469100 -153200 0 0 $X=-472500 $Y=-160600
X11 2 3 ncap_IO_cell $T=-456100 -153200 0 0 $X=-459500 $Y=-160600
X12 2 3 ncap_IO_cell $T=-443100 -153200 0 0 $X=-446500 $Y=-160600
X13 2 3 ncap_IO_cell $T=-430100 -153200 0 0 $X=-433500 $Y=-160600
X14 2 3 ncap_IO_cell $T=-417100 -153200 0 0 $X=-420500 $Y=-160600
.ENDS
***************************************
.SUBCKT ICV_42 2 3
** N=3 EP=2 IP=30 FDC=15
X0 2 3 ncap_IO_cell $T=-599100 -63200 0 0 $X=-602500 $Y=-70600
X1 2 3 ncap_IO_cell $T=-586100 -63200 0 0 $X=-589500 $Y=-70600
X2 2 3 ncap_IO_cell $T=-573100 -63200 0 0 $X=-576500 $Y=-70600
X3 2 3 ncap_IO_cell $T=-560100 -63200 0 0 $X=-563500 $Y=-70600
X4 2 3 ncap_IO_cell $T=-547100 -63200 0 0 $X=-550500 $Y=-70600
X5 2 3 ncap_IO_cell $T=-534100 -63200 0 0 $X=-537500 $Y=-70600
X6 2 3 ncap_IO_cell $T=-521100 -63200 0 0 $X=-524500 $Y=-70600
X7 2 3 ncap_IO_cell $T=-508100 -63200 0 0 $X=-511500 $Y=-70600
X8 2 3 ncap_IO_cell $T=-495100 -63200 0 0 $X=-498500 $Y=-70600
X9 2 3 ncap_IO_cell $T=-482100 -63200 0 0 $X=-485500 $Y=-70600
X10 2 3 ncap_IO_cell $T=-469100 -63200 0 0 $X=-472500 $Y=-70600
X11 2 3 ncap_IO_cell $T=-456100 -63200 0 0 $X=-459500 $Y=-70600
X12 2 3 ncap_IO_cell $T=-443100 -63200 0 0 $X=-446500 $Y=-70600
X13 2 3 ncap_IO_cell $T=-430100 -63200 0 0 $X=-433500 $Y=-70600
X14 2 3 ncap_IO_cell $T=-417100 -63200 0 0 $X=-420500 $Y=-70600
.ENDS
***************************************
.SUBCKT ICV_28 1 2 3
** N=3 EP=3 IP=3 FDC=1
X0 1 2 3 nch_18_mac_3 $T=0 0 0 0 $X=-5600 $Y=-1800
.ENDS
***************************************
.SUBCKT ICV_27 1 2 3
** N=3 EP=3 IP=3 FDC=1
X0 1 2 3 nch_18_mac_3 $T=0 0 0 0 $X=-5600 $Y=-1800
.ENDS
***************************************
.SUBCKT ICV_40
** N=3 EP=0 IP=92 FDC=0
.ENDS
***************************************
.SUBCKT ICV_39
** N=3 EP=0 IP=92 FDC=0
.ENDS
***************************************
.SUBCKT ICV_41
** N=2 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_38 1 2 3 4
** N=6 EP=4 IP=6 FDC=2
X0 1 3 rupolym_0 $T=-385100 -220800 1 0 $X=-387000 $Y=-230100
X1 2 4 rupolym_0 $T=-385100 -198150 1 0 $X=-387000 $Y=-207450
.ENDS
***************************************
.SUBCKT ICV_37 2 3
** N=3 EP=2 IP=34 FDC=17
X0 2 3 ncap_IO_cell $T=-404100 -153200 0 0 $X=-407500 $Y=-160600
X1 2 3 ncap_IO_cell $T=-391100 -153200 0 0 $X=-394500 $Y=-160600
X2 2 3 ncap_IO_cell $T=-378100 -153200 0 0 $X=-381500 $Y=-160600
X3 2 3 ncap_IO_cell $T=-365100 -153200 0 0 $X=-368500 $Y=-160600
X4 2 3 ncap_IO_cell $T=-352100 -153200 0 0 $X=-355500 $Y=-160600
X5 2 3 ncap_IO_cell $T=-339100 -153200 0 0 $X=-342500 $Y=-160600
X6 2 3 ncap_IO_cell $T=-326100 -153200 0 0 $X=-329500 $Y=-160600
X7 2 3 ncap_IO_cell $T=-313100 -153200 0 0 $X=-316500 $Y=-160600
X8 2 3 ncap_IO_cell $T=-300100 -153200 0 0 $X=-303500 $Y=-160600
X9 2 3 ncap_IO_cell $T=-287100 -153200 0 0 $X=-290500 $Y=-160600
X10 2 3 ncap_IO_cell $T=-274100 -153200 0 0 $X=-277500 $Y=-160600
X11 2 3 ncap_IO_cell $T=-261100 -153200 0 0 $X=-264500 $Y=-160600
X12 2 3 ncap_IO_cell $T=-248100 -153200 0 0 $X=-251500 $Y=-160600
X13 2 3 ncap_IO_cell $T=-235100 -153200 0 0 $X=-238500 $Y=-160600
X14 2 3 ncap_IO_cell $T=-222100 -153200 0 0 $X=-225500 $Y=-160600
X15 2 3 ncap_IO_cell $T=-209100 -153200 0 0 $X=-212500 $Y=-160600
X16 2 3 ncap_IO_cell $T=-196100 -153200 0 0 $X=-199500 $Y=-160600
.ENDS
***************************************
.SUBCKT ICV_36 2 3
** N=3 EP=2 IP=34 FDC=17
X0 2 3 ncap_IO_cell $T=-404100 -63200 0 0 $X=-407500 $Y=-70600
X1 2 3 ncap_IO_cell $T=-391100 -63200 0 0 $X=-394500 $Y=-70600
X2 2 3 ncap_IO_cell $T=-378100 -63200 0 0 $X=-381500 $Y=-70600
X3 2 3 ncap_IO_cell $T=-365100 -63200 0 0 $X=-368500 $Y=-70600
X4 2 3 ncap_IO_cell $T=-352100 -63200 0 0 $X=-355500 $Y=-70600
X5 2 3 ncap_IO_cell $T=-339100 -63200 0 0 $X=-342500 $Y=-70600
X6 2 3 ncap_IO_cell $T=-326100 -63200 0 0 $X=-329500 $Y=-70600
X7 2 3 ncap_IO_cell $T=-313100 -63200 0 0 $X=-316500 $Y=-70600
X8 2 3 ncap_IO_cell $T=-300100 -63200 0 0 $X=-303500 $Y=-70600
X9 2 3 ncap_IO_cell $T=-287100 -63200 0 0 $X=-290500 $Y=-70600
X10 2 3 ncap_IO_cell $T=-274100 -63200 0 0 $X=-277500 $Y=-70600
X11 2 3 ncap_IO_cell $T=-261100 -63200 0 0 $X=-264500 $Y=-70600
X12 2 3 ncap_IO_cell $T=-248100 -63200 0 0 $X=-251500 $Y=-70600
X13 2 3 ncap_IO_cell $T=-235100 -63200 0 0 $X=-238500 $Y=-70600
X14 2 3 ncap_IO_cell $T=-222100 -63200 0 0 $X=-225500 $Y=-70600
X15 2 3 ncap_IO_cell $T=-209100 -63200 0 0 $X=-212500 $Y=-70600
X16 2 3 ncap_IO_cell $T=-196100 -63200 0 0 $X=-199500 $Y=-70600
.ENDS
***************************************
.SUBCKT ICV_34
** N=3 EP=0 IP=82 FDC=0
.ENDS
***************************************
.SUBCKT ICV_33
** N=3 EP=0 IP=82 FDC=0
.ENDS
***************************************
.SUBCKT ICV_35
** N=2 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_32 1 2
** N=5 EP=2 IP=6 FDC=2
X0 1 5 rupolym_0 $T=-165850 -220800 1 0 $X=-167750 $Y=-230100
X1 2 5 rupolym_0 $T=-165850 -198150 1 0 $X=-167750 $Y=-207450
.ENDS
***************************************
.SUBCKT ICV_31 2 3
** N=3 EP=2 IP=36 FDC=18
X0 2 3 ncap_IO_cell $T=-183100 -153200 0 0 $X=-186500 $Y=-160600
X1 2 3 ncap_IO_cell $T=-170100 -153200 0 0 $X=-173500 $Y=-160600
X2 2 3 ncap_IO_cell $T=-157100 -153200 0 0 $X=-160500 $Y=-160600
X3 2 3 ncap_IO_cell $T=-144100 -153200 0 0 $X=-147500 $Y=-160600
X4 2 3 ncap_IO_cell $T=-131100 -153200 0 0 $X=-134500 $Y=-160600
X5 2 3 ncap_IO_cell $T=-118100 -153200 0 0 $X=-121500 $Y=-160600
X6 2 3 ncap_IO_cell $T=-105100 -153200 0 0 $X=-108500 $Y=-160600
X7 2 3 ncap_IO_cell $T=-92100 -153200 0 0 $X=-95500 $Y=-160600
X8 2 3 ncap_IO_cell $T=-79100 -153200 0 0 $X=-82500 $Y=-160600
X9 2 3 ncap_IO_cell $T=-66100 -153200 0 0 $X=-69500 $Y=-160600
X10 2 3 ncap_IO_cell $T=-53100 -153200 0 0 $X=-56500 $Y=-160600
X11 2 3 ncap_IO_cell $T=-40100 -153200 0 0 $X=-43500 $Y=-160600
X12 2 3 ncap_IO_cell $T=-27100 -153200 0 0 $X=-30500 $Y=-160600
X13 2 3 ncap_IO_cell $T=-14100 -153200 0 0 $X=-17500 $Y=-160600
X14 2 3 ncap_IO_cell $T=-1100 -153200 0 0 $X=-4500 $Y=-160600
X15 2 3 ncap_IO_cell $T=11900 -153200 0 0 $X=8500 $Y=-160600
X16 2 3 ncap_IO_cell $T=24900 -153200 0 0 $X=21500 $Y=-160600
X17 2 3 ncap_IO_cell $T=37900 -153200 0 0 $X=34500 $Y=-160600
.ENDS
***************************************
.SUBCKT ICV_30 2 3
** N=3 EP=2 IP=36 FDC=18
X0 2 3 ncap_IO_cell $T=-183100 -63200 0 0 $X=-186500 $Y=-70600
X1 2 3 ncap_IO_cell $T=-170100 -63200 0 0 $X=-173500 $Y=-70600
X2 2 3 ncap_IO_cell $T=-157100 -63200 0 0 $X=-160500 $Y=-70600
X3 2 3 ncap_IO_cell $T=-144100 -63200 0 0 $X=-147500 $Y=-70600
X4 2 3 ncap_IO_cell $T=-131100 -63200 0 0 $X=-134500 $Y=-70600
X5 2 3 ncap_IO_cell $T=-118100 -63200 0 0 $X=-121500 $Y=-70600
X6 2 3 ncap_IO_cell $T=-105100 -63200 0 0 $X=-108500 $Y=-70600
X7 2 3 ncap_IO_cell $T=-92100 -63200 0 0 $X=-95500 $Y=-70600
X8 2 3 ncap_IO_cell $T=-79100 -63200 0 0 $X=-82500 $Y=-70600
X9 2 3 ncap_IO_cell $T=-66100 -63200 0 0 $X=-69500 $Y=-70600
X10 2 3 ncap_IO_cell $T=-53100 -63200 0 0 $X=-56500 $Y=-70600
X11 2 3 ncap_IO_cell $T=-40100 -63200 0 0 $X=-43500 $Y=-70600
X12 2 3 ncap_IO_cell $T=-27100 -63200 0 0 $X=-30500 $Y=-70600
X13 2 3 ncap_IO_cell $T=-14100 -63200 0 0 $X=-17500 $Y=-70600
X14 2 3 ncap_IO_cell $T=-1100 -63200 0 0 $X=-4500 $Y=-70600
X15 2 3 ncap_IO_cell $T=11900 -63200 0 0 $X=8500 $Y=-70600
X16 2 3 ncap_IO_cell $T=24900 -63200 0 0 $X=21500 $Y=-70600
X17 2 3 ncap_IO_cell $T=37900 -63200 0 0 $X=34500 $Y=-70600
.ENDS
***************************************
.SUBCKT ICV_29
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_1 1 2
** N=9 EP=2 IP=92 FDC=112
X1 2 3 4 ICV_52 $T=0 0 0 0 $X=-1335650 $Y=-488900
X3 1 5 ICV_50 $T=0 0 0 0 $X=-1335650 $Y=-230000
X4 1 3 4 ICV_49 $T=0 0 0 0 $X=-1335650 $Y=-161000
X6 3 1 4 ICV_26 $T=-1273100 -290550 0 0 $X=-1278700 $Y=-292750
X7 5 4 6 7 ICV_44 $T=0 0 0 0 $X=-606300 $Y=-230100
X11 2 4 ICV_43 $T=0 0 0 0 $X=-603000 $Y=-161000
X12 2 4 ICV_42 $T=0 0 0 0 $X=-603000 $Y=-78000
X13 2 1 3 ICV_28 $T=-593150 -385100 1 0 $X=-598750 $Y=-466900
X14 2 1 3 ICV_27 $T=-593150 -263950 1 0 $X=-598750 $Y=-345750
X18 6 7 8 9 ICV_38 $T=0 0 0 0 $X=-410000 $Y=-230100
X19 2 4 ICV_37 $T=0 0 0 0 $X=-410000 $Y=-161000
X20 2 4 ICV_36 $T=0 0 0 0 $X=-410000 $Y=-78000
X24 8 9 ICV_32 $T=0 0 0 0 $X=-189000 $Y=-230100
X25 2 4 ICV_31 $T=0 0 0 0 $X=-189000 $Y=-161000
X26 2 4 ICV_30 $T=0 0 0 0 $X=-189000 $Y=-78000
.ENDS
***************************************
.SUBCKT M1_OD_158
** N=2 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT M1_OD_151
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT cisco_output avdd agnd voutA up down
** N=217 EP=5 IP=8 FDC=6
X0 voutA 7 rnodl w=2.5e-06 l=1.08e-05 $X=212050 $Y=187250 $D=1091
X1 6 voutA rnodl w=2.5e-06 l=1.11e-05 $X=213400 $Y=-7800 $D=1091
X2 voutA 7 rnodl w=2.5e-06 l=1.08e-05 $X=240350 $Y=187250 $D=1091
X3 6 voutA rnodl w=2.5e-06 l=1.11e-05 $X=241700 $Y=-7800 $D=1091
M4 6 down agnd agnd nch_mac L=9e-08 W=7.5e-05 nf=50 $X=192650 $Y=-50200 $D=50
M5 7 up avdd avdd pch_mac L=9e-08 W=7.2e-05 nf=48 $X=193400 $Y=340450 $D=128
.ENDS
***************************************
.SUBCKT ICV_9
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_8
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_7
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_6
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_5
** N=1 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_4
** N=3 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_3
** N=4 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT ICV_2
** N=2 EP=0 IP=0 FDC=0
.ENDS
***************************************
.SUBCKT test1 up voutA down agnd avdd
** N=10 EP=5 IP=54 FDC=128
X13 down up agnd ICV_19 $T=0 0 0 0 $X=-74800 $Y=240500
X20 voutA agnd ICV_12 $T=0 0 0 0 $X=698000 $Y=-617000
X21 voutA avdd ICV_11 $T=0 0 0 0 $X=698000 $Y=240500
X23 avdd agnd ICV_1 $T=2139700 1236100 1 180 $X=1937200 $Y=700150
X24 avdd agnd voutA up down cisco_output $T=1943400 112650 0 0 $X=2043900 $Y=8500
.ENDS
***************************************
