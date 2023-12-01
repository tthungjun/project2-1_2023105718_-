#ifndef SCHEDULE_H
#define SCHEDULE_H
#include<iostream>
#include <vector>
using namespace std;

class Schedule {
	vector<string> clist;
	string cname;
public:
	void addCourse(string c);
	void print();
};
#endif
