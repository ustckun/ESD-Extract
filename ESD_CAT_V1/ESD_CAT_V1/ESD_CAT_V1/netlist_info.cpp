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
	char *details;
	int n;
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
			details = strtok(ready_to_seperate, " ");
			string diode_pins, diode_pin1, diode_pin2;
			details = strtok(NULL, " ");
			diode_pin1 = details;
			details = strtok(NULL, " ");
			diode_pin2 = details;
			diode_pins = diode_pin1 +' '+ diode_pin2 + ' ';
			final_line = 'D'+temp_line + " D_" + subckt_name;
			Device_details_extract::device_detail_d.insert(make_pair(diode_pins, final_line));
			delete ready_to_seperate;
		}
		if (device_type == 'C')
		{
			getline(netlist_data, temp_line);
			char *ready_to_seperate = new char[temp_line.length() + 1];
			strcpy(ready_to_seperate, temp_line.c_str());
			details = strtok(ready_to_seperate, " ");
			string c_pins, c_pin1, c_pin2;
			details = strtok(NULL, " ");
			c_pin1 = details;
			details = strtok(NULL, " ");
			c_pin2 = details;
			c_pins = c_pin1 + ' ' + c_pin2 + ' ';
			final_line = 'C' + temp_line + " C_" + subckt_name;
			Device_details_extract::device_detail_c.insert(make_pair(c_pins, final_line));
			delete ready_to_seperate;
		}
		if (device_type == 'R')
		{
			getline(netlist_data, temp_line);
			char *ready_to_seperate = new char[temp_line.length() + 1];
			strcpy(ready_to_seperate, temp_line.c_str());
			details = strtok(ready_to_seperate, " ");
			string r_pins, r_pin1, r_pin2;
			details = strtok(NULL, " ");
			r_pin1 = details;
			details = strtok(NULL, " ");
			r_pin2 = details;
			r_pins = r_pin1 + ' ' + r_pin2 + ' ';
			final_line = 'R' + temp_line + " R_" + subckt_name;
			Device_details_extract::device_detail_r.insert(make_pair(r_pins, final_line));
			delete ready_to_seperate;
		}
		if (device_type == 'M')
		{
			getline(netlist_data, temp_line);
			char * ready_to_seperate = new char[temp_line.length() + 1];
			strcpy(ready_to_seperate, temp_line.c_str());
			details = strtok(ready_to_seperate, " ");
			string m_pins, m_pin1, m_pin2, m_pin3, m_pin4;
			details = strtok(NULL, " ");
			m_pin1 = details;
			details = strtok(NULL, " ");
			m_pin2 = details;
			details = strtok(NULL, " ");
			m_pin3 = details;
			details = strtok(NULL, " ");
			m_pin4 = details;
			m_pins = m_pin1 + ' ' + m_pin2 + ' ' + m_pin3 + ' ' + m_pin4 + ' ';
			details = strtok(NULL, " ");
			string temp_name = details;
			for (n = 0; n<device_list.nmos_list.size(); n++)
			{
				if (device_list.nmos_list[n] == temp_name)
					n = device_list.nmos_list.size()+1;
			}
			if (n == device_list.nmos_list.size()+2)
			{
				final_line = "M" + temp_line + " NM_" + subckt_name;
				Device_details_extract::device_detail_nm.insert(make_pair(m_pins, final_line));
				delete ready_to_seperate;
			}
			else
			{
				final_line = "M" + temp_line + " PM_" + subckt_name;
				Device_details_extract::device_detail_pm.insert(make_pair(m_pins, final_line));
				delete ready_to_seperate;
			}
		}
		if (device_type == 'Q')
		{
			getline(netlist_data, temp_line);
			char * ready_to_seperate = new char[temp_line.length() + 1];
			strcpy(ready_to_seperate, temp_line.c_str());
			details = strtok(ready_to_seperate, " ");
			string m_pins, m_pin1, m_pin2, m_pin3;
			details = strtok(NULL, " ");
			m_pin1 = details;
			details = strtok(NULL, " ");
			m_pin2 = details;
			details = strtok(NULL, " ");
			m_pin3 = details;
			m_pins = m_pin1 + ' ' + m_pin2 + ' ' + m_pin3 + ' ';
			details = strtok(NULL, " ");
			string temp_name = details;
			for (n = 0; n<device_list.npnbjt_list.size(); n++)
			{
				if (device_list.npnbjt_list[n] == temp_name)
					n = device_list.npnbjt_list.size() + 1;
			}
			if (n == device_list.npnbjt_list.size() + 2)
			{
				final_line = "Q" + temp_line + " NPNBJT_" + subckt_name;
				Device_details_extract::device_detail_nq.insert(make_pair(m_pins, final_line));
				delete ready_to_seperate;
			}
			else
			{
				final_line = "Q" + temp_line + " PNPBJT_" + subckt_name;
				Device_details_extract::device_detail_pq.insert(make_pair(m_pins, final_line));
				delete ready_to_seperate;
			}
		}
		if (device_type == 'X')
		{
			getline(netlist_data, temp_line);
			char * ready_to_seperate = new char[temp_line.length() + 1];
			strcpy(ready_to_seperate, temp_line.c_str());
			details = strtok(ready_to_seperate, " ");
			string x_pins, temp_x_pin, temp_name;
			details = strtok(NULL, " ");
			temp_x_pin = details;
			details = strtok(NULL, " ");
			while (details[0]!='$')
			{
				x_pins = x_pins + temp_x_pin + ' ';
				temp_x_pin = details;
				details = strtok(NULL, " ");
			}
			temp_name = temp_x_pin;
			int device_number;
			for (n = 0; n<device_list.diode_list.size(); n++)
			{
				if (device_list.diode_list[n] == temp_name)
					device_number=1;
			}
			if (device_number != 1)
			{
				for (n = 0; n < device_list.capacitor_list.size(); n++)
				{
					if (device_list.capacitor_list[n] == temp_name)
						device_number = 2;
				}
				if (device_number != 2)
				{
					for (n = 0; n < device_list.resistor_list.size(); n++)
					{
						if (device_list.resistor_list[n] == temp_name)
							device_number = 3;
					}
					if (device_number != 3)
					{
						for (n = 0; n < device_list.nmos_list.size(); n++)
						{
							if (device_list.nmos_list[n] == temp_name)
								device_number = 4;
						}
						if (device_number != 4)
						{
							for (n = 0; n < device_list.pmos_list.size(); n++)
							{
								if (device_list.pmos_list[n] == temp_name)
									device_number = 5;
							}
							if (device_number != 5)
							{
								for (n = 0; n < device_list.npnbjt_list.size(); n++)
								{
									if (device_list.npnbjt_list[n] == temp_name)
										device_number = 6;
								}
								if (device_number != 6)
								{
									for (n = 0; n < device_list.pnpbjt_list.size(); n++)
									{
										if (device_list.pnpbjt_list[n] == temp_name)
											device_number = 7;
									}
									if (device_number != 7)
									{
										final_line = "X" + temp_line + " SUBC_" + subckt_name;
										Device_details_extract::device_detail_x.insert(make_pair(x_pins, final_line));
										delete ready_to_seperate;
										device_number = 0;
									}
									else
									{
										final_line = "X" + temp_line + " PQ_" + subckt_name;
										Device_details_extract::device_detail_pq.insert(make_pair(x_pins, final_line));
										delete ready_to_seperate;
										device_number = 0;
									}
								}
								else
								{
									final_line = "X" + temp_line + " NQ_" + subckt_name;
									Device_details_extract::device_detail_nq.insert(make_pair(x_pins, final_line));
									delete ready_to_seperate;
									device_number = 0;
								}
							}
							else
							{
								final_line = "X" + temp_line + " PM_" + subckt_name;
								Device_details_extract::device_detail_pm.insert(make_pair(x_pins, final_line));
								delete ready_to_seperate;
								device_number = 0;
							}
						}
						else
						{
							final_line = "X" + temp_line + " NM_" + subckt_name;
							Device_details_extract::device_detail_nm.insert(make_pair(x_pins, final_line));
							delete ready_to_seperate;
							device_number = 0;
						}
					}
					else
					{
						final_line = "X" + temp_line + " R_" + subckt_name;
						Device_details_extract::device_detail_r.insert(make_pair(x_pins, final_line));
						delete ready_to_seperate;
						device_number = 0;
					}
				}
				else
				{
					final_line = "X" + temp_line + " C_" + subckt_name;
					Device_details_extract::device_detail_c.insert(make_pair(x_pins, final_line));
					delete ready_to_seperate;
					device_number = 0;
				}
			}
			else
			{
				final_line = "X" + temp_line + " D_" + subckt_name;
				Device_details_extract::device_detail_d.insert(make_pair(x_pins, final_line));
				delete ready_to_seperate;
				device_number = 0;
			}
		}
	}
}