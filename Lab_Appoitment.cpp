#include <iostream>
#include <cstring>
#include "Lab_Appointment.h"
#include <iomanip>
using namespace std;

Lab_Appointment::Lab_Appointment()
{
	strcpy(labAppointmentID, "");
  lab = new Lab("", "");
}

Lab_Appointment::Lab_Appointment(const char pLabAppointmentID[], const char pLabID[], const char pLabType[], int pDay, int pMonth, int pYear, int pHour, int pMinute, const char pPaymentID[], double pAmount) : Appointment(pDay, pMonth, pYear, pHour, pMinute, pPaymentID, pAmount)
{
	strcpy(labAppointmentID, pLabAppointmentID);

  lab = new Lab(pLabID, pLabType);
}

void Lab_Appointment::displayDetails()
{
	cout << "Lab Appointment ID : " << labAppointmentID << endl
       << "Date : " << setfill('0') << setw(2) << day << "/" 
                    << setfill('0') << setw(2) << month << "/"
                    << setfill('0') << setw(4) << year << endl
		   << "Time : " << setfill('0') << setw(2) << hour << ":"
                    << setfill('0') << setw(2) << minute << endl
       << "Lab Details" << endl;
  lab->displayDetails();
  cout << endl << endl;
}
