#include <stdio.h>
#include <stdlib.h>

struct person
{
   int age;
   float weight;
};

int main()
{
	struct person *personPtr, raphael;
	personPtr = &raphael;

	raphael.age = 20;
	raphael.weight = 73.1;

	printf("Age: %d\n", personPtr->age);
	printf("weight: %f\n", personPtr->weight);
	return 0;
}