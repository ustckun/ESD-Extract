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

using namespace std;

class sub_ct_extr
{
public:
	string ggnmos_extr(multimap<string, string> nmos_list);
	string ggpmos_extr(multimap<string, string> pmos_list);
	string npnbjt_extr(multimap<string, string> npnbjt_list, multimap<string, string> res_list);
	string pnpbjt_extr(multimap<string, string> pnpbjt_list, multimap<string, string> res_list);
	string gcnmos_extr(multimap<string, string> nmos_list, multimap<string, string> res_list, multimap<string, string> cap_list);
	string gcpmos_extr(multimap<string, string> nmos_list, multimap<string, string> res_list, multimap<string, string> cap_list);

private:

};


#endif