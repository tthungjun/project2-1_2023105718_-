#include "schedule.h"

void Schedule::addCourse(string c) {
	clist.push_back(c);
}

void Schedule::print() {
	cout << "List of Courses" << endl;
	for (int i = 0; i < clist.size(); i++) {
		cout << clist[i] << endl;
	}
}