#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include <string>
#include "roster.h"
using namespace std;

class Course {
	string cname;
	Roster r;
	int units;
public:
	Course(string a, int u);
	Roster& getRoster();
	void print();
	friend class Registrar;
};
#endif
