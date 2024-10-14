#include <stdio.h>
// A normal function with an int parameter
// and void return type

#include <iostream>
using namespace std;

int add(int a,int b) { 
	return a + b;
}

int main()
{
	// fun_ptr is a pointer to function fun()
	int(*fun_ptr)(int,int) = &add;
	
	cout << fun_ptr << endl;
	

	/* The above line is equivalent of following two
	void (*fun_ptr)(int);
	fun_ptr = &fun;
	*/

	// Invoking fun() using fun_ptr
	int i =(*fun_ptr)(10,20);
	cout << i;
	return 0;
}

	/*int integer_1 = 15439;
	unsigned char* p = (unsigned char*)&integer_1;

	for (int i = 0; i < sizeof(int); i++) {
		printf("Address: %p -> Value: %02hhx\n", p + i, *(p + i));
	}
	*/
	


