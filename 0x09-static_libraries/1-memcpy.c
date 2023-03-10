#include "main.h"

/**
 * _memcpy - copy a byte to a memory
 * @src: source memory area
 * @dest: destination memory area
 * @n: bytes to copy
 *
 * Return:pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		dest[e] = src[e];
	}
	return (dest);
}
