#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
	//private attribute
	string name;
	int age;
	int roll;
	double gpa;
	//public attritubes
public:
	//constructors(2 constructors so constructor overloading)s
	Student();
	Student(string a, int b, int c, double d);

	//destructor
	~Student();

	//setters
	void setname(string n);
	void setage(int a);
	void setroll(int a);
	void setgpa(double b);

	//getters
	string getname();
	int getage();
	int getroll();
	double getgpa();

	//garde cal method
	char grade();


};



#endif
