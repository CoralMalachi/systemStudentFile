#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include "FileHandle.h"

void f1()
{
	char name[20];
	int marks, num;
	int i;
	printf("Enter number of students: ");
	scanf("%d", &num);
	
	//declare a pointer of type file - for communication between the file and program
	FILE* fp;
	//Opening a file - for creation and edit
	//Text files are the normal .txt files - "w"
	//If the file exists, its contents are overwritten
	fp = fopen("records.txt", "w");
	//if open/ creation failed return null
	if (fp == NULL) {
		printf("Error!");
		exit(1);
	}
	for (i = 0; i < num; ++i) {
		printf("Enter name of student number %d :", i + 1);
		getchar();
		//It is safe to use because it checks the array bound
		fgets(name, 20, stdin);
		printf("Enter marks: ");
		scanf("%d", &marks);

		// sends formatted output to a stream
		fprintf(fp, "\nName: %s \nMarks: %d \n", name, marks);
	}
	fclose(fp);

}
