#include <iostream>
#include "Appointment.h"
#include "Lab.h"
using namespace std;

class Lab_Appointment : public Appointment
{
protected:
    char labAppointmentID[8];
    Lab * lab;

public:
    Lab_Appointment();
    Lab_Appointment(const char pLabAppointmentID[], const char pLabID[], const char pLabType[], int pDay, int pMonth, int pYear, int pHour, int pMinute, const char pPaymentID[], double pAmount);
    void setLabAppointmentID(char pLabAppointmentID);
    char getLabAppointmentID();
    void displayDetails();

};


