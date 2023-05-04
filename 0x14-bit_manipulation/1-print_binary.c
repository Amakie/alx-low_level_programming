#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints binary represeentation
 * @n: integer
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned int a = 0;

	for (a = 1 << 31; a > 0; a = a / 2)
		if (n & 1)
		{
			_putchar("1");
		}
		else
		{
			_putchar("0");
		}
}
