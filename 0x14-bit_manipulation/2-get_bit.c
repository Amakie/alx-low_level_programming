#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @index: index starting from 0
 * @n: unsigned int
 *
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index != sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> 1) & 1);
}
