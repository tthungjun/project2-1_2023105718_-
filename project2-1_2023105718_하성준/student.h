#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include <string>
#include "schedule.h"
using namespace std;

class Student {
    Schedule sch;
    string name;
public:
    Student(string n);
    Schedule& getSchedule();
    void print();
    friend class Registrar;
};

#endif
