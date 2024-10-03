// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;



int main()
{
	int a;
	int *p;
	p = (int*)malloc(sizeof(int));
	*p = 10;

	free(p);

	return 0;
}
