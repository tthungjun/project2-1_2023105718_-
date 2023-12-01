#include "course.h"

Course::Course(string a, int u) : cname(a), units(u) {};

Roster& Course::getRoster() {
	return r;
}

void Course::print() {
	cout << "Course Name: " << cname << endl;
	cout << "Numbers of Units: " << units << endl;
	r.print();
	cout << endl;
}