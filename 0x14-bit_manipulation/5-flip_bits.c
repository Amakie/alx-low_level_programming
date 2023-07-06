#include "main.h"

/**
 * flip_bits - function that returns the number of bits to be flipped
 * @m: unsigned integer
 * @n: unsigned integer
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int return_num = 0;

	for (a = 0; a < sizeof(unsigned long int) * 8; a++)
		(return_num) += (((n ^ m) >> a) & 1);

	return (return_num);
}
