#ifndef ROSTER_H
#define ROSTER_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Roster {
	vector<string> slist;
public:
	void addStudent(string s);
	void print();
};
#endif

