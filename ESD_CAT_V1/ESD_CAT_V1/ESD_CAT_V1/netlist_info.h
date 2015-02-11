////////////////////////////////////////////////////////////////////////////////
/// COPYRIGHT NOTICE\n
/// Distribute under Apache License\n
/// Copyright (c) 2015, Chenkun Wang, UCR\n
/// All rights reserved.
///
/// \file netlist_info.h
/// \brief Define the class define.
/// \version 1.0
/// \author Chenkun Wang
/// \date 02/10/2015
////////////////////////////////////////////////////////////////////////////////
///
///		
///
////////////////////////////////////////////////////////////////////////////////
#ifndef __ESDCAT__Device_details_extract__
#define __ESDCAT__Device_details_extract__

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#include <cstring>

#include"define.h"
#include"device_list.h"

using namespace std;

class Device_details_extract
{
public:
	multimap<string, string> device_detail;
	void DeviceExtract(string netlist_address,device_classify device_list);

private:
	string unknow_line;
};

#endif