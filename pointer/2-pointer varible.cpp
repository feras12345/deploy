#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
	int x = 10;
	int y = 0;
	int *p1, *p2;


	p1 = &x; // p1 contents address of x like 00078fdx0

	p2 = p1;   // p2 content address of x 

	y = *p2;

	*p2 = 5;  // *p2 == x // x = 5 
	cout << x;

	
	return 0;
