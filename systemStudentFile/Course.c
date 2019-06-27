#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include "Course.h"

course* createCourse()
{
	course* c = malloc(sizeof(course));
	if (c == NULL) {
		printf("%s\n", "course Allocation failed");
		exit(1);
	}
	printf("Create new Course \n");
	printf("Name: \n");
	fgets(c->name, 20, stdin);	
	printf("grade: \n");
	scanf("%i", c->grade);
	return c;
}
