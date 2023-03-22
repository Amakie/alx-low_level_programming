#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - itterates the array
 * @array: array
 * @action: pointer to the function
 * @size: size of the array
 * Return: Always nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int c;
	
	if (array == NULL || action == NULL)
		return;

	for (c = 0; c < size; c++)
		action(array[c]);
}
