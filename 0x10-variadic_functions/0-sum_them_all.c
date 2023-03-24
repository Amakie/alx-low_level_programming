#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all arguments
 * @n: first argument in the function
 *
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int a;

	int sum;

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
	{
	va_list myintegers;

	va_start(myintegers, n);

	sum = n + va_arg(myintegers);
	va_end(myintegers);
	}
	return (sum);
}
