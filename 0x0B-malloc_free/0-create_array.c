#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @c: character to the pointer
 * @size: size of the unsigned integer
 *
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	{
		ptr = malloc(size * sizeof(char));
	}
	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}

	return (ptr);
}
