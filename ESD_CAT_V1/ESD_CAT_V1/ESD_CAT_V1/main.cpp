#include "device_list.h"
#include "netlist_info.h"

void main()
{
	string dir = "G:\\ESD Project\\ESD_CAT_V1\\Device_List";
	string dir1 = "G:\\ESD Project\\ESD_CAT_V1\\test1.sp";
	device_classify Test;
	Test.ReadDeviceList(dir);
	Device_details_extract test1;
	test1.DeviceExtract(dir1, Test);

	
	getchar();
}