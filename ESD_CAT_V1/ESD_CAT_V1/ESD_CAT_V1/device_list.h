////////////////////////////////////////////////////////////////////////////////
/// COPYRIGHT NOTICE\n
/// Distribute under Apache License\n
/// Copyright (c) 2015, Chenkun Wang, UCR\n
/// All rights reserved.
///
/// \file define.h
/// \brief Define the class define.
/// \version 1.0
/// \author Chenkun Wang
/// \date 02/02/2015
////////////////////////////////////////////////////////////////////////////////
///
///		
///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#include <cstring>

#include"define.h"

using namespace std;

class device_classify
{
public:
	device_classify();
	vector<string> nmos_list;
	vector<string> pmos_list;
	vector<string> diode_list;
	vector<string> capacitor_list;
	vector<string> resistor_list;
	vector<string> bjt_list;
	string device_file_dir;
	void ReadDeviceList(string file_directory);

private:

};