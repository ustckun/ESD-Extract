#include "device_list.h"

void main()
{
	string dir = "G:\\ESD Project\\ESD_CAT_V1\\Device_List";
	device_classify Test;
	Test.ReadDeviceList(dir);
	cout << Test.bjt_list[2] << endl;
	cout << Test.diode_list[3] << endl;
	cout << Test.resistor_list[10] << endl;
	getchar();
}