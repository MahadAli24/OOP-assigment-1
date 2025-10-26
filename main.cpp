#include "student.h"
#include <iostream>
using namespace std;

int main() {

	cout << "creating objects" << endl;
	Student s1;
	Student s2("Mahad", 18, 1, 3.0);
	Student s3;

	s3.setname("ali");
	s3.setage(18);
	s3.setroll(02);
	s3.setgpa(2.5);

	cout << "displaying info for student with roll " << s1.getroll() << endl;
	cout << "name: " << s1.getname() << " || age: " << s1.getage() << " || grade: " << s1.grade()<<endl;

	cout << "displaying info for student with roll " << s2.getroll() << endl;
	cout << "name: " << s2.getname() << " || age: " << s2.getage() << " || grade: " << s2.grade()<<endl;

	cout << "displaying info for student with roll " << s3.getroll() << endl;
	cout << "name: " << s3.getname() << " || age: " << s3.getage() << " || grade: " << s3.grade()<<endl;

	return 0;
}