#include "main.h"

/**
 * _memset - prints a contant byte
 * @s: pointer to the memory
 * @b: number of bytes to fill
 * @n: constant byte
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		s[e] = b;
	}
	return (s);
}
