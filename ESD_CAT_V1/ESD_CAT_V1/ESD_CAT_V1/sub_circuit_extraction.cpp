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

string sub_ct_extr::ggnmos_extr(multimap<string, string> nmos_list)
{
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
			ggnmos_result = ggnmos_result+ "\n\n" + (*point).second;
		}
	}
	return ggnmos_result;

}


string sub_ct_extr::ggpmos_extr(multimap<string, string> pmos_list)
{
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
			ggpmos_result = ggpmos_result + "\n\n" + (*point).second;
		}
	}
	return ggpmos_result;

}


string sub_ct_extr::npnbjt_extr(multimap<string, string> npnbjt_list, multimap<string, string> res_list)
{

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
				npnbjt_result = npnbjt_result + "\n\n" + (*point_bjt).second + '\n' + (*point_res).second;
			}
		}
	}
	return npnbjt_result;

}


string sub_ct_extr::pnpbjt_extr(multimap<string, string> pnpbjt_list, multimap<string, string> res_list)
{

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
				pnpbjt_result = pnpbjt_result + "\n\n" + (*point_bjt).second + '\n' + (*point_res).second;
			}
		}
	}
	return pnpbjt_result;

}



string sub_ct_extr::gcnmos_extr(multimap<string, string> nmos_list, multimap<string, string> res_list, multimap<string, string> cap_list)
{
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
						gcnmos_result = gcnmos_result + "\n\n" + (*point_mos).second + '\n' + (*point_res).second + '\n' + (*point_cap).second;
					}
				}
			}
		}
	}
	return gcnmos_result;
}


string sub_ct_extr::gcpmos_extr(multimap<string, string> pmos_list, multimap<string, string> res_list, multimap<string, string> cap_list)
{
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
						gcpmos_result = gcpmos_result + "\n\n" + (*point_mos).second + '\n' + (*point_res).second + '\n' + (*point_cap).second;
					}
				}
			}
		}
	}
	return gcpmos_result;


}
