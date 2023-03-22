#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name of function
 * @name: pointer of name
 * @f: pointer of function
 *
 * Return: Always zero
 */
void print_name(char *name, void (*f)(char *));
{
	f(name);
}
{
	_putchar('f');
	_putchar('\n');
}
