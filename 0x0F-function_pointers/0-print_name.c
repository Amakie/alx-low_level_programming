#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name of function
 * @name: pointer of name
 * @f: pointer of function
 *
 * Return: Always zero
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	return;

	f(name);
}
