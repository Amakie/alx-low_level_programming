#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints only numbers
 * @n: first integer passed to the function
 * @separator: string to be printed betwen numbers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list myintegers;

	va_start(myintegers, n);

	for (a = 0; a < n; a++)
	{
	if (separator != NULL)
		printf("%s", separator);
	else
		printf("%d", va_arg(myintegers, int));
	}

	printf("\n");

	va_end(myintegers);
}
