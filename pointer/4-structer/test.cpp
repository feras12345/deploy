// function_arag_pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;



struct myStructure {
	int myNum;
	char myLetter;
	char myString[30]; // String
};

int main() {
	struct myStructure s1;

	s1.myNum = 5;
	s1.myLetter = 'a';

	// Assign a value to the string using the strcpy function
	strcpy_s(s1.myString, "Some text");

	// Print the value
	printf("My string: %s", s1.myString);
	
	// Create a structure variable and assign values to it
	struct myStructure s2 = { 13, 'B', "Some text" };

	// Print values
	printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

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
