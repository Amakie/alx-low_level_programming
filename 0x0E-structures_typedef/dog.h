#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure for dog
 * @name: name pointer
 * @age: dog's age
 * @owner: dog owner
 *
 * Description: define a new type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
