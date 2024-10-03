// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct Student {
	int id;
	int age;
};

struct emp
{
	int id;
	char name[20];
	int age;
};

void func(Student *s) {
	s->age = s->age + 1;
}

struct emp input_emp() {
	emp e;
	cout<<"enter the id " << "\n";
	cin >> e.id;
	cout << "enter the name " << "\n";
	cin >> e.name;
	cout << "enter the age " << "\n";
	cin >> e.age;
	return e;
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


	emp e;
	e = input_emp();
	cout << e.id << "\n";
	cout << e.name << "\n";
	cout << e.age << "\n";

	return 0;
}
