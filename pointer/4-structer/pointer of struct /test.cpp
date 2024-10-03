// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>

struct Student {
	int roll_no;
	char name[30];
	char branch[40];
	int batch;
};

int main()
{

	struct Student s1;
	

	s1.roll_no = 27;
	strcpy_s(s1.name, "Kamlesh Joshi");
	strcpy_s(s1.branch, "Computer Science And Engineering");
	s1.batch = 2019;

	Student* ptr;
	ptr= &s1;

	printf("Roll Number: %d\n", (*ptr).roll_no);
	printf("Name: %s\n", (*ptr).name);
	printf("Branch: %s\n", (*ptr).branch);
	printf("Batch: %d", (*ptr).batch);


	
	// Displaying details of the student
	printf("\nStudent details are: \n");

	printf("Roll No: %d\n", ptr->roll_no);
	printf("Name: %s\n", ptr->name);
	printf("Branch: %s\n", ptr->branch);
	printf("Batch: %d\n", ptr->batch);
	return 0;
}
