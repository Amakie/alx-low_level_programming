#include "main.h"

/**
 * set_bit - sets the value of a bit to 0 at a given index
 * @index: integer index
 * @n: unsigned long integer
 *
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_ind;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	set_ind = ~(1UL << index);
	*n = *n & set_ind
	return (1);
}
