#pragma once
#include <iostream>
using namespace std;

class Lab
{
private:
    char labID[8];
    char labType[30];

public:
    Lab();
    Lab(const char pLabID[], const char pLabType[]);
    void setlabID(char pLabID);
    void setlabType(char pLabType);
    char getlabID();
    char getlabType();
    void displayDetails();

};


