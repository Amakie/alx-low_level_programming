#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints binary representation
 * @n: integer
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned int a = 0;

	for (a = 1 << 31; a > 0; a = a / 2)
		if (n & 1)
		{
			putchar("1\n");
		}
		else
		{
			putchar("0\n");
		}
}
