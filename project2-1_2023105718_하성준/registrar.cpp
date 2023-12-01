#include "registrar.h"

void Registrar::enroll(Student& s, Course& c) {
	string n1 = s.name;
	string n2 = c.cname;
	s.getSchedule().addCourse(n2);
	c.getRoster().addStudent(n1);
}
