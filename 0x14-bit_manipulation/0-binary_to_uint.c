#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	int a = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] == '0' || b[a] == '1'; a++)
	{
		conv_num <<= 1;
		conv_num += b[a] - '0';
	}

	for (a = 0; b[a] == '0' || b[a] == '1'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	return (conv_num);
}
