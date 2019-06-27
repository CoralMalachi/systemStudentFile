#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include "Student.h"

void createStudent()
{
	student* s = malloc(sizeof(student));
	if (s == NULL) {
		printf("%s\n", " student Allocation failed");
		exit(1);
	}
	printf("Create new student \n");
	printf("Name: \n");
	fgets(s->name, 20, stdin);
	printf("ID: \n");
	fgets(s->id, 15, stdin);
	printf("number_of_cources: \n");
	scanf("%d", s->number_of_cources);
	s->cources = malloc((s->number_of_cources) * sizeof(course));
	int i = 0;
	for (i; i < s->number_of_cources; ++i) {
		s->cources[i] = *(createCourse());
	}
	FILE* fp;
	fp = fopen("record.txt", "ab+");
	if (fp == NULL) {
		//MessageBox(0, "Error in Opening file\nMake sure your file is not write protected", "Warning", 0);
		return;
	}
	fwrite(s, sizeof(*s), 1, fp);
	fclose(fp);

}
