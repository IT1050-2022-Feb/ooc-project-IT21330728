#include <iostream>
#include "Lab.h"
#include <cstring>
using namespace std;

Lab::Lab()
{
	strcpy(labID, "");
	strcpy(labType, "");
}

Lab::Lab(const char pLabID[], const char pLabType[])
{
	strcpy(labID, pLabID);
	strcpy(labType, pLabType);
}

void Lab::displayDetails()
{
	cout << "Lab ID : " << labID << endl
		   << "Lab Type : " << labType << endl << endl;
}
