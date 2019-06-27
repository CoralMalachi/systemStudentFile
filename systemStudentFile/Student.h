#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"

#include "stdio.h";

typedef struct students
{
	char name[20];
	char id[15];
	//char address[20];
	int number_of_cources;
	course* cources ;
}student;

void createStudent();

#endif