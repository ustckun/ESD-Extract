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
/// \date 02/03/2015
////////////////////////////////////////////////////////////////////////////////
///
///		
///
////////////////////////////////////////////////////////////////////////////////


#include "device_list.h"

device_classify::device_classify()
{
	device_file_dir = "G:\ESD Project\ESD_CAT_V1\Device_List";
}

void device_classify::ReadDeviceList(string file_directory)
{
	ifstream device_data(file_directory.c_str());
	char temp_string[50];
	int n = 0;
	int i;
	char ch;
	char temp_instance[50];
	string temp_line;
	string device_name;
	device_data.get(ch);
	while (ch!=':')
	{
		temp_string[n] = ch;
		n++;
		device_data.get(ch);
	}
	temp_string[n] = '\0';
	device_name = temp_string;
	if (device_name == "Diode")
	{
		getline(device_data, temp_line);
		getline(device_data, temp_line);
		while (temp_line!="\0")
		{
			for (i = 0; temp_line[i] != ' '&&temp_line[i] != '\0'; i++)
			{
				temp_instance[i] = temp_line[i];
			}
			temp_instance[i] = '\0';
			diode_list.push_back(temp_instance);
			getline(device_data, temp_line);
		}
	}
	n = 0;
	device_data.get(ch);
	while (ch != ':')
	{
		temp_string[n] = ch;
		n++;
		device_data.get(ch);
	}
	temp_string[n] = '\0';
	device_name = temp_string;
	if (device_name == "Capacitor")
	{
		getline(device_data, temp_line);
		getline(device_data, temp_line);
		while (temp_line != "\0")
		{
			for (i = 0; temp_line[i] != ' '&&temp_line[i] != '\0'; i++)
			{
				temp_instance[i] = temp_line[i];
			}
			temp_instance[i] = '\0';
			capacitor_list.push_back(temp_instance);
			getline(device_data, temp_line);
		}
	}
	n = 0;
	device_data.get(ch);
	while (ch != ':')
	{
		temp_string[n] = ch;
		n++;
		device_data.get(ch);
	}
	temp_string[n] = '\0';
	device_name = temp_string;
	if (device_name == "Resistor")
	{
		getline(device_data, temp_line);
		getline(device_data, temp_line);
		while (temp_line != "\0")
		{
			for (i = 0; temp_line[i] != ' '&&temp_line[i] != '\0'; i++)
			{
				temp_instance[i] = temp_line[i];
			}
			temp_instance[i] = '\0';
			resistor_list.push_back(temp_instance);
			getline(device_data, temp_line);
		}
	}
	n = 0;
	device_data.get(ch);
	while (ch != ':')
	{
		temp_string[n] = ch;
		n++;
		device_data.get(ch);
	}
	temp_string[n] = '\0';
	device_name = temp_string;
	if (device_name == "PMOS")
	{
		getline(device_data, temp_line);
		getline(device_data, temp_line);
		while (temp_line != "\0")
		{
			for (i = 0; temp_line[i] != ' '&&temp_line[i]!='\0'; i++)
			{
				temp_instance[i] = temp_line[i];
			}
			temp_instance[i] = '\0';
			pmos_list.push_back(temp_instance);
			getline(device_data, temp_line);
		}
	}
	n = 0;
	device_data.get(ch);
	while (ch != ':')
	{
		temp_string[n] = ch;
		n++;
		device_data.get(ch);
	}
	temp_string[n] = '\0';
	device_name = temp_string;
	if (device_name == "NMOS")
	{
		getline(device_data, temp_line);
		getline(device_data, temp_line);
		while (temp_line != "\0")
		{
			for (i = 0; temp_line[i] != ' '&&temp_line[i] != '\0'; i++)
			{
				temp_instance[i] = temp_line[i];
			}
			temp_instance[i] = '\0';
			nmos_list.push_back(temp_instance);
			getline(device_data, temp_line);
		}
	}
	n = 0;
	device_data.get(ch);
	while (ch != ':')
	{
		temp_string[n] = ch;
		n++;
		device_data.get(ch);
	}
	temp_string[n] = '\0';
	device_name = temp_string;
	if (device_name == "BJT")
	{
		getline(device_data, temp_line);
		getline(device_data, temp_line);
		while (temp_line != "\0")
		{
			for (i = 0; temp_line[i] != ' '&&temp_line[i] != '\0'; i++)
			{
				temp_instance[i] = temp_line[i];
			}
			temp_instance[i] = '\0';
			bjt_list.push_back(temp_instance);
			getline(device_data, temp_line);
		}
	}
}
