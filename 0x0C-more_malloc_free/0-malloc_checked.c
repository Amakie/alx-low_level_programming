#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * malloc_checked - causes normal process termination with a status value of 98
 * @b: integer variable
 *
 * Return: pointer d
 */

void *malloc_checked(unsigned int b)
{
	int *d;

	d = malloc(b);

	if (d == NULL)
	{
		exit(98);
	}

	return (d);
}
