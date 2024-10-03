// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct Student {
	int id;
	int age;
};

void func(Student *s) {
	s->age = s->age + 1;
}

int main()
{

	Student s;
	Student *p;
	p = &s;

	p->age = 25;

	cout << p->age << "\n";//print age before the call func

	func(&s);

	cout << p->age << "\n"; // print age after the call func

	return 0;
}
