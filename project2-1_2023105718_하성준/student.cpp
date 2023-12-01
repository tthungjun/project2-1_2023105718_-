#include "student.h"

Student::Student(string n) : name(n) {};

Schedule& Student::getSchedule() {
	return sch;
}

void Student::print() {
	cout << "Student name: " << name << endl;
	sch.print();
	cout << endl;
}