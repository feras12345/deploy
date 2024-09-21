#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
	int a = 10;
	cout <<"the value of varible a  is "<< a<<"\n";
	cout <<"the address of varible a is "<< &a << "\n";
	int *p;
	p = &a;
	int b;
	//p = a error because a is value not address and p storted address only because it is pointer;
	cout << "the pointer is stored address only" << p<<"\n";
	b = *p;
	cout << "the value of varible b is ponter for *p (10)" << b << "\n";
	
	return 0;
}
