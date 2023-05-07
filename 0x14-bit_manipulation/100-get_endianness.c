#include "main.h"

/**
 * get_endianness - function that checks endianess
 *
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	unsigned int num_check = 0x12345678;
	char (*ptr) = char (&num_check);

	if (*ptr == 0x12)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
