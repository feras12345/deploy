// function_arag_pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void add_wrong(int a, int b) {

	a = a + 10;
	b = b + 10;

}

void add_correct(int *a, int *b) {

	*a = *a + 10;
	*b = *b + 10;

}


int main()
{
	int a = 1;
	int b = 10;

	cout << "the varible before the function call"<<"\n";

	cout << a << "\n";
	cout << b << "\n";

	add_wrong(a, b);

	cout << "the varible after function call;" << "\n";

	add_correct(&a, &b);

	cout << "the varible after function call " << "\n";
	cout << a << "\n";
	cout << b << "\n";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

