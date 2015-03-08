////////////////////////////////////////////////////////////////////////////////
/// COPYRIGHT NOTICE\n
/// Distribute under Apache License\n
/// Copyright (c) 2015, Chenkun Wang, UCR\n
/// All rights reserved.
///
/// \file sub_circuit_extract.h
/// \brief Define the class define.
/// \version 1.0
/// \author Chenkun Wang
/// \date 03/01/2015
////////////////////////////////////////////////////////////////////////////////
///
///		
///
////////////////////////////////////////////////////////////////////////////////
#ifndef __ESDCAT__Sub_Circuit_Extract__
#define __ESDCAT__Sub_Circuit_Extract__

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#include <cstring>

#include"define.h"
#include"netlist_info.h"

using namespace std;

class sub_ct_extr
{
public:
	vector<string> ggnmos_extr(multimap<string, string> nmos_list);
	vector<string> ggpmos_extr(multimap<string, string> pmos_list);
	vector<string> npnbjt_extr(multimap<string, string> npnbjt_list, multimap<string, string> res_list);
	vector<string> pnpbjt_extr(multimap<string, string> pnpbjt_list, multimap<string, string> res_list);
	vector<string> gcnmos_extr(multimap<string, string> nmos_list, multimap<string, string> res_list, multimap<string, string> cap_list);
	vector<string> gcpmos_extr(multimap<string, string> pmos_list, multimap<string, string> res_list, multimap<string, string> cap_list);
	void Generate_ESD_netlist(string file_address);
	void Run_Extraction(Device_details_extract original_netlist);
private:
	vector<string> ggnmos;
	vector<string> ggpmos;
	vector<string> npnbjt;
	vector<string> pnpbjt;
	vector<string> gcnmos;
	vector<string> gcpmos;

};


#endif