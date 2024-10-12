
// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void printhelloword() {
	cout << "hello world" << "\n";
}

int* add(int *a, int *b) {
	int *c = (int*)malloc(sizeof(int));
	*c = *a + *b;
	//cout << c << "\n";
	
	return c;
}

int main()
{

	int a = 2;
	int b = 4;
	int *ptr;
	ptr = add(&a, &b);
	printhelloword();
	cout << ptr << " " << *ptr;
 
	



	

	return 0;
}
