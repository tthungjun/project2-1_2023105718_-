#include "roster.h"

void Roster::addStudent(string s) {
	slist.push_back(s);
}

void Roster::print() {
	cout << "List of students" << endl;
	for (int i = 0; i < slist.size(); i++) {
		cout << slist[i] << endl;
	}
}