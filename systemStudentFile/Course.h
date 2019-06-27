
#ifndef COURSE_H
#define COURSE_H
#include "stdio.h";

#include <stdlib.h> 
typedef struct courses
{
	char name[20];
	unsigned int grade;


}course;

course* createCourse();

#endif