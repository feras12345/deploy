// function_arag_pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



int main()
{

	int a[5] = {10,2,3,4,7};
	int *p;

	cout << a << "\n";  //address of a[0];
	cout << a[0] << "\n";
	cout << &a << "\n"; //address of a[0];

	p = a;  //address of a[0]; in pointer p
	cout << p << "\n"; //0022FC04
	cout << p + 1 << "\n"; //address of a[1]  ;   0022FC08
	cout << p + 2 << "\n"; //address of a[2];    0022FC0C

	//نلاحظ ان الزيادة في المؤشرات هي 4 بايت وذلك لان المصفوفة من نوع 
	//int
	cout << *p << "\n";  // value of a[0]  10
	cout << *(p + 1) << "\n"; // value of a[1]  2
	cout << *(p + 2) << "\n";  // value of a[2]  3


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
