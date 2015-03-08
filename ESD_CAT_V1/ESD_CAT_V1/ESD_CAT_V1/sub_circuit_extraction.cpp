////////////////////////////////////////////////////////////////////////////////
/// COPYRIGHT NOTICE\n
/// Distribute under Apache License\n
/// Copyright (c) 2015, Chenkun Wang, UCR\n
/// All rights reserved.
///
/// \file sub_circuit_extract.cpp
/// \brief Define the class define.
/// \version 1.0
/// \author Chenkun Wang
/// \date 03/01/2015
////////////////////////////////////////////////////////////////////////////////
///
///		
///
////////////////////////////////////////////////////////////////////////////////

#include "sub_circuit_extraction.h"

vector<string> sub_ct_extr::ggnmos_extr(multimap<string, string> nmos_list)
{
	vector<string> temp_ggnmos;
	multimap<string, string>::iterator point = nmos_list.begin();
	char *pins,*temp_pin;
	string pin1, pin2, pin3, pin4;
	string ggnmos_result;
	for (; point != nmos_list.end(); point++)
	{
		pins = new char[(*point).first.length() + 1];
		strcpy(pins, (*point).first.c_str());
		temp_pin = strtok(pins, " ");
		pin1 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin2 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin3 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin4 = temp_pin;
		if (pin1 == pin2)
		{
			ggnmos_result = (*point).second;
			temp_ggnmos.push_back(ggnmos_result);
		}
	}
	ggnmos = temp_ggnmos;
	return temp_ggnmos;
}


vector<string> sub_ct_extr::ggpmos_extr(multimap<string, string> pmos_list)
{
	vector<string> temp_ggpmos;
	multimap<string, string>::iterator point = pmos_list.begin();
	char *pins, *temp_pin;
	string pin1, pin2, pin3, pin4;
	string ggpmos_result;
	for (; point != pmos_list.end(); point++)
	{
		pins = new char[(*point).first.length() + 1];
		strcpy(pins, (*point).first.c_str());
		temp_pin = strtok(pins, " ");
		pin1 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin2 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin3 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin4 = temp_pin;
		if (pin1 == pin2)
		{
			ggpmos_result = (*point).second;
			temp_ggpmos.push_back(ggpmos_result);
		}
	}
	ggpmos = temp_ggpmos;
	return temp_ggpmos;
}


vector<string> sub_ct_extr::npnbjt_extr(multimap<string, string> npnbjt_list, multimap<string, string> res_list)
{
	vector<string> temp_npnbjt;
	multimap<string, string>::iterator point_bjt = npnbjt_list.begin();
	char *pins, *temp_pin;
	string pin1, pin2, pin3,pin11,pin12;
	string npnbjt_result;
	for (; point_bjt != npnbjt_list.end(); point_bjt++)
	{
		multimap<string, string>::iterator point_res = res_list.begin();
		pins = new char[(*point_bjt).first.length() + 1];
		strcpy(pins, (*point_bjt).first.c_str());
		temp_pin = strtok(pins, " ");
		pin1 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin2 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin3 = temp_pin;
		for (; point_res != res_list.end(); point_res++)
		{
			pins = new char[(*point_res).first.length() + 1];
			strcpy(pins, (*point_res).first.c_str());
			temp_pin = strtok(pins, " ");
			pin11 = temp_pin;
			temp_pin = strtok(NULL, " ");
			pin12 = temp_pin;
			if (pin11 == pin2&&pin12 == pin3)
			{
				npnbjt_result = (*point_bjt).second + '\n' + (*point_res).second;
				temp_npnbjt.push_back(npnbjt_result);
			}
		}
	}
	npnbjt = temp_npnbjt;
	return temp_npnbjt;
}


vector<string> sub_ct_extr::pnpbjt_extr(multimap<string, string> pnpbjt_list, multimap<string, string> res_list)
{
	vector<string> temp_pnpbjt;
	multimap<string, string>::iterator point_bjt = pnpbjt_list.begin();
	char *pins, *temp_pin;
	string pin1, pin2, pin3, pin11, pin12;
	string pnpbjt_result;
	for (; point_bjt != pnpbjt_list.end(); point_bjt++)
	{
		multimap<string, string>::iterator point_res = res_list.begin();
		pins = new char[(*point_bjt).first.length() + 1];
		strcpy(pins, (*point_bjt).first.c_str());
		temp_pin = strtok(pins, " ");
		pin1 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin2 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin3 = temp_pin;
		for (; point_res != res_list.end(); point_res++)
		{
			pins = new char[(*point_res).first.length() + 1];
			strcpy(pins, (*point_res).first.c_str());
			temp_pin = strtok(pins, " ");
			pin11 = temp_pin;
			temp_pin = strtok(NULL, " ");
			pin12 = temp_pin;
			if (pin11 == pin1&&pin12 == pin2)
			{
				pnpbjt_result = (*point_bjt).second + '\n' + (*point_res).second;
				temp_pnpbjt.push_back(pnpbjt_result);
			}
		}
	}
	pnpbjt = temp_pnpbjt;
	return temp_pnpbjt;
}



vector<string> sub_ct_extr::gcnmos_extr(multimap<string, string> nmos_list, multimap<string, string> res_list, multimap<string, string> cap_list)
{
	vector<string> temp_gcnmos;
	multimap<string, string>::iterator point_mos = nmos_list.begin();
	char *pins, *temp_pin;
	string pin1, pin2, pin3, pin4, pin11, pin12, pin21, pin22;
	string gcnmos_result;
	for (; point_mos != nmos_list.end(); point_mos++)
	{
		multimap<string, string>::iterator point_res = res_list.begin();
		pins = new char[(*point_mos).first.length() + 1];
		strcpy(pins, (*point_mos).first.c_str());
		temp_pin = strtok(pins, " ");
		pin1 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin2 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin3 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin4 = temp_pin;
		for (; point_res != res_list.end(); point_res++)
		{
			multimap<string, string>::iterator point_cap = cap_list.begin();
			pins = new char[(*point_res).first.length() + 1];
			strcpy(pins, (*point_res).first.c_str());
			temp_pin = strtok(pins, " ");
			pin11 = temp_pin;
			temp_pin = strtok(NULL, " ");
			pin12 = temp_pin;
			if (pin11 == pin1&&pin12 == pin2)
			{
				for (; point_cap != cap_list.end(); point_cap++)
				{
					pins = new char[(*point_cap).first.length() + 1];
					strcpy(pins, (*point_cap).first.c_str());
					temp_pin = strtok(pins, " ");
					pin21 = temp_pin;
					temp_pin = strtok(NULL, " ");
					pin22 = temp_pin;
					if (pin21 == pin1&&pin22 == pin3)
					{
						gcnmos_result = (*point_mos).second + '\n' + (*point_res).second + '\n' + (*point_cap).second;
						temp_gcnmos.push_back(gcnmos_result);
					}
				}
			}
		}
	}
	gcnmos = temp_gcnmos;
	return temp_gcnmos;
}


vector<string> sub_ct_extr::gcpmos_extr(multimap<string, string> pmos_list, multimap<string, string> res_list, multimap<string, string> cap_list)
{
	vector<string> temp_gcpmos;
	multimap<string, string>::iterator point_mos = pmos_list.begin();
	char *pins, *temp_pin;
	string pin1, pin2, pin3, pin4, pin11, pin12, pin21, pin22;
	string gcpmos_result;
	for (; point_mos != pmos_list.end(); point_mos++)
	{
		multimap<string, string>::iterator point_res = res_list.begin();
		pins = new char[(*point_mos).first.length() + 1];
		strcpy(pins, (*point_mos).first.c_str());
		temp_pin = strtok(pins, " ");
		pin1 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin2 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin3 = temp_pin;
		temp_pin = strtok(NULL, " ");
		pin4 = temp_pin;
		for (; point_res != res_list.end(); point_res++)
		{
			multimap<string, string>::iterator point_cap = cap_list.begin();
			pins = new char[(*point_res).first.length() + 1];
			strcpy(pins, (*point_res).first.c_str());
			temp_pin = strtok(pins, " ");
			pin11 = temp_pin;
			temp_pin = strtok(NULL, " ");
			pin12 = temp_pin;
			if (pin11 == pin1&&pin12 == pin2)
			{
				for (; point_cap != cap_list.end(); point_cap++)
				{
					pins = new char[(*point_cap).first.length() + 1];
					strcpy(pins, (*point_cap).first.c_str());
					temp_pin = strtok(pins, " ");
					pin21 = temp_pin;
					temp_pin = strtok(NULL, " ");
					pin22 = temp_pin;
					if (pin21 == pin1&&pin22 == pin3)
					{
						gcpmos_result = (*point_mos).second + '\n' + (*point_res).second + '\n' + (*point_cap).second;
						temp_gcpmos.push_back(gcpmos_result);
					}
				}
			}
		}
	}
	gcpmos = temp_gcpmos;
	return temp_gcpmos;
}

void sub_ct_extr::Run_Extraction(Device_details_extract original_netlist)
{
	sub_ct_extr::ggnmos_extr(original_netlist.device_detail_nm);
	sub_ct_extr::ggpmos_extr(original_netlist.device_detail_pm);
	sub_ct_extr::npnbjt_extr(original_netlist.device_detail_nq, original_netlist.device_detail_r);
	sub_ct_extr::pnpbjt_extr(original_netlist.device_detail_pq, original_netlist.device_detail_r);
	sub_ct_extr::gcnmos_extr(original_netlist.device_detail_nm, original_netlist.device_detail_r, original_netlist.device_detail_c);
	sub_ct_extr::gcpmos_extr(original_netlist.device_detail_pm, original_netlist.device_detail_r, original_netlist.device_detail_c);
}


void sub_ct_extr::Generate_ESD_netlist(string file_address)
{
	ofstream esd_netlist;
	esd_netlist.open(file_address);
	esd_netlist << "* SPICE NETLIST\n\n***************************************\n";
	vector<string>::iterator it;
	char *temp_line;
	string temp_info;
	string pin1, pin2, pin3, pin4;
	int i = 0;
	int n = 0;
	string IC_netlist;
	for (it = ggnmos.begin(); it != ggnmos.end(); it++)
	{
		temp_info = *it;
		temp_line = new char[temp_info.length() + 1];
		strcpy(temp_line, temp_info.c_str());
		pin1 = strtok(temp_line, " ");
		pin1 = strtok(NULL, " ");
		pin2 = strtok(NULL, " ");
		pin3 = strtok(NULL, " ");
		pin4 = strtok(NULL, " ");
		esd_netlist << ".SUBCKT GGNMOS" << i << ' ' << pin3 << ' ' << pin2 << ' ' << pin4 << '\n';
		esd_netlist << *it << '\n';
		esd_netlist << ".ENDS\n***************************************\n";
		IC_netlist = IC_netlist + 'X' + to_string(n) + ' ' + pin3 + ' ' + pin2 + ' ' + pin4 + " GGNMOS" + to_string(i) + '\n';
		i++;
		n++;
	}
	i = 0;
	for (it = ggpmos.begin(); it != ggpmos.end(); it++)
	{
		temp_info = *it;
		temp_line = new char[temp_info.length() + 1];
		strcpy(temp_line, temp_info.c_str());
		pin1 = strtok(temp_line, " ");
		pin1 = strtok(NULL, " ");
		pin2 = strtok(NULL, " ");
		pin3 = strtok(NULL, " ");
		pin4 = strtok(NULL, " ");
		esd_netlist << ".SUBCKT GGPMOS" << i << ' ' << pin3 << ' ' << pin2 << ' ' << pin4 << '\n';
		esd_netlist << *it << '\n';
		esd_netlist << ".ENDS\n***************************************\n";
		IC_netlist = IC_netlist + 'X' + to_string(n) + ' ' + pin3 + ' ' + pin2 + ' ' + pin4 + " GGPMOS" + to_string(i) + '\n';
		i++;
		n++;
	}
	i = 0;
	for (it = gcnmos.begin(); it != gcnmos.end(); it++)
	{
		temp_info = *it;
		temp_line = new char[temp_info.length() + 1];
		strcpy(temp_line, temp_info.c_str());
		pin1 = strtok(temp_line, " ");
		pin1 = strtok(NULL, " ");
		pin2 = strtok(NULL, " ");
		pin3 = strtok(NULL, " ");
		pin4 = strtok(NULL, " ");
		esd_netlist << ".SUBCKT GCNMOS" << i << ' ' << pin3 << ' ' << pin2 << ' ' << pin4 << '\n';
		esd_netlist << *it << '\n';
		esd_netlist << ".ENDS\n***************************************\n";
		IC_netlist = IC_netlist + 'X' + to_string(n) + ' ' + pin3 + ' ' + pin2 + ' ' + pin4 + " GCNMOS" + to_string(i) + '\n';
		i++;
		n++;
	}
	for (it = gcpmos.begin(); it != gcpmos.end(); it++)
	{
		temp_info = *it;
		temp_line = new char[temp_info.length() + 1];
		strcpy(temp_line, temp_info.c_str());
		pin1 = strtok(temp_line, " ");
		pin1 = strtok(NULL, " ");
		pin2 = strtok(NULL, " ");
		pin3 = strtok(NULL, " ");
		pin4 = strtok(NULL, " ");
		esd_netlist << ".SUBCKT GCPMOS" << i << ' ' << pin3 << ' ' << pin2 << ' ' << pin4 << '\n';
		esd_netlist << *it << '\n';
		esd_netlist << ".ENDS\n***************************************\n";
		IC_netlist = IC_netlist + 'X' + to_string(n) + ' ' + pin3 + ' ' + pin2 + ' ' + pin4 + " GCPMOS" + to_string(i) + '\n';
		i++;
		n++;
	}
	for (it = npnbjt.begin(); it != npnbjt.end(); it++)
	{
		temp_info = *it;
		temp_line = new char[temp_info.length() + 1];
		strcpy(temp_line, temp_info.c_str());
		pin1 = strtok(temp_line, " ");
		pin1 = strtok(NULL, " ");
		pin2 = strtok(NULL, " ");
		pin3 = strtok(NULL, " ");
		esd_netlist << ".SUBCKT NPNBJT" << i << ' ' << pin1 << ' ' << pin3 << '\n';
		esd_netlist << *it << '\n';
		esd_netlist << ".ENDS\n***************************************\n";
		IC_netlist = IC_netlist + 'X' + to_string(n) + ' ' + pin1 + ' ' + pin3 + " NPNBJT" + to_string(i) + '\n';
		i++;
		n++;
	}
	for (it = pnpbjt.begin(); it != pnpbjt.end(); it++)
	{
		temp_info = *it;
		temp_line = new char[temp_info.length() + 1];
		strcpy(temp_line, temp_info.c_str());
		pin1 = strtok(temp_line, " ");
		pin1 = strtok(NULL, " ");
		pin2 = strtok(NULL, " ");
		pin3 = strtok(NULL, " ");
		esd_netlist << ".SUBCKT PNPBJT" << i << ' ' << pin1 << ' ' << pin3 << '\n';
		esd_netlist << *it << '\n';
		esd_netlist << ".ENDS\n***************************************\n";
		IC_netlist = IC_netlist + 'X' + to_string(n) + ' ' + pin1 + ' ' + pin3 + " PNPBJT" + to_string(i) + '\n';
		i++;
		n++;
	}
	esd_netlist << ".SUBCKT IC\n" << IC_netlist << ".ENDS\n***************************************";
}
