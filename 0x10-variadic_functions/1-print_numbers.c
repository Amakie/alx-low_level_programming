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
	va_list myintegers;

	unsigned int a;

	va_start(myintegers, n);
	{
	for (a = 0; a < n; a++)

	if ((separator != NULL) && (myintegers != (n - 1)))

		printf("%s", separator);

	printf("%d", va_arg(myintegers, int));
	}

	va_end(myintegers);
	printf("\n");
}
