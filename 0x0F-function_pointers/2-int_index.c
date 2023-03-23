#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an index
 * @size: number of elements in the array
 * @array: array
 * @cmp: pointer to a function
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (!array || !cmp)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
			return (c);
	}

	return (-1);
}
