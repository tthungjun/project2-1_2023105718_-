#ifndef REGISTAR_H
#define REGISTAR_H
#include<iostream>
#include <string>
#include "student.h"
#include "course.h"
using namespace std;

class Registrar {
public:
    void enroll(Student& s, Course& c);
};
#endif
