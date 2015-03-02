#include "device_list.h"
#include "netlist_info.h"
#include "sub_circuit_extraction.h"

void main()
{
	typedef multimap<string, string>::iterator mulit;
	string dir = "G:\\ESD Project\\ESD_CAT_V1\\Device_List";
	string dir1 = "G:\\ESD Project\\ESD_CAT_V1\\test2.sp";
	device_classify Test;
	Test.ReadDeviceList(dir);
	Device_details_extract test1;
	test1.DeviceExtract(dir1, Test);
	sub_ct_extr test2;
	string output = test2.ggnmos_extr(test1.device_detail_nm);
	cout << "GGNMOS:" << endl;
	cout << output << endl << endl << endl;
	output = test2.ggpmos_extr(test1.device_detail_pm);
	cout << "GGPMOS:" << endl;
	cout << output << endl << endl << endl;
	output = test2.gcnmos_extr(test1.device_detail_nm, test1.device_detail_r,test1.device_detail_c);
	cout << "GCNMOS:" << endl;
	cout << output << endl << endl << endl;
	output = test2.gcpmos_extr(test1.device_detail_pm, test1.device_detail_r, test1.device_detail_c);
	cout << "GCPMOS:" << endl;
	cout << output << endl << endl << endl;
	output = test2.npnbjt_extr(test1.device_detail_nq,test1.device_detail_r);
	cout << "NPNBJT:" << endl;
	cout << output << endl << endl << endl;
	output = test2.pnpbjt_extr(test1.device_detail_pq, test1.device_detail_r);
	cout << "PNPBJT:" << endl;
	cout << output << endl;
	getchar();
}