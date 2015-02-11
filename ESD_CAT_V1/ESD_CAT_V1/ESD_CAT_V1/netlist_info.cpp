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
/// \date 02/10/2015
////////////////////////////////////////////////////////////////////////////////
///
///		
///
////////////////////////////////////////////////////////////////////////////////

#include"netlist_info.h"


void Device_details_extract::DeviceExtract(string netlist_address, device_classify device_list)
{
	ifstream netlist_data(netlist_address.c_str());
	string temp_line;
	char subckt_name_ctr[40];
	char device_type;
	string final_line;
	string subckt_name;
	getline(netlist_data, temp_line);
	getline(netlist_data, temp_line);
	getline(netlist_data, temp_line);
	//getline(netlist_data, temp_line);
	while (!netlist_data.eof())
	{
		netlist_data.get(device_type);
		if (device_type == '*')
		{
			getline(netlist_data, temp_line);
		}
		if (device_type == '.')
		{
			netlist_data.get(device_type);
			if (device_type == 'E')
			{
				getline(netlist_data, temp_line);
				getline(netlist_data, temp_line);
			}
			getline(netlist_data, temp_line);
			char *temp_line_ctr = new char[temp_line.length() + 1];
			strcpy(temp_line_ctr, temp_line.c_str());
			int i = 0;
			while (temp_line_ctr[i] != ' ')
			{
				i++;
			}
			i++;
			int j = 0;
			while (temp_line_ctr[i] != ' '&&temp_line_ctr[i]!='\0')
			{
				subckt_name_ctr[j] = temp_line_ctr[i];
				j++;
				i++;
			}
			subckt_name_ctr[j] = '\0';
			subckt_name = subckt_name_ctr;
			delete temp_line_ctr;
		}
			if (device_type == 'D')
		{
			getline(netlist_data, temp_line);
			char *ready_to_seperate = new char[temp_line.length() + 1];
			strcpy(ready_to_seperate, temp_line.c_str());
			char *details;
			details = strtok(ready_to_seperate, " ");
			string diode_pins, diode_pin1, diode_pin2;
			details = strtok(NULL, " ");
			diode_pin1 = details;
			details = strtok(NULL, " ");
			diode_pin2 = details;
			diode_pins = diode_pin1 +' '+ diode_pin2;
			final_line = 'D'+temp_line + " D_" + subckt_name;
			Device_details_extract::device_detail.insert(make_pair(diode_pins, final_line));
		}
		if (device_type == 'C')
		{

		}
		if (device_type == 'R')
		{

		}
		if (device_type == 'M')
		{

		}
		if (device_type == 'Q')
		{

		}
		if (device_type == 'X')
		{

		}
	}
}