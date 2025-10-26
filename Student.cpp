#include "student.h"
#include <iostream>
using namespace std;
//default constructor
Student::Student() {
	name = "unknown";
	age = 0;
	roll = 0;
	gpa = 0.0;
	cout << "default constructor used"<<endl;
}
//parameterized constructor 
Student::Student(string a, int b, int c, double d) {
	name = a;
	age = b;
	roll = c;
	gpa = d;
	cout << "parametrized constructor used"<<endl;
}
//destructor
Student::~Student() {
	cout << "object deleted"<<endl;
}
//setter methods
void Student::setname(string n) {
	name = n;
}
void Student::setage(int a) {
	age = a;
}
void Student::setroll(int a) {
	roll = a;
}
void Student::setgpa(double b) {
	gpa = b;
}
//getter meh=thods
string Student::getname() {
	return name;
}
int Student::getage() {
	return age;
}
int Student::getroll() {
	return roll;
}
double Student::getgpa() {
	return gpa;
}
//grade cal method
char Student::grade() {
	if (gpa >= 4) {
		return 'A';
	}
	else if (gpa <4 && gpa>=3) {
		return 'B';
	}
	else if (gpa <3 && gpa>=2) {
		return 'C';
	}
	else if (gpa <2 && gpa>=1) {
		return 'D';
	}
	else {
		return 'F';
	}
}