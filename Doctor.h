#pragma once
#include <iostream>
#include "System_User.h"
using namespace std;

class Doctor : public System_User
{
protected:
    char doctorID[6];
    char specialization[30];
    char qualification[20];

public:
    Doctor();
    Doctor(const char pEmail[], const char pName[], const char pNIC[], const char pDoctorID[], const char pSpecialization[], const char pQualification[]);
    void setDoctorID(char pDoctorID);
    void setSpecialization(char pSpecialization);
    void setQualification(char pQualification);
    char getDoctorID();
    char getSpecialization();
    char getQualification();
    void displayDetails();

};


