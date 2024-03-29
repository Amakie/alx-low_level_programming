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
	va_list myintegers;

	unsigned int a;

	int sum;

	va_start(myintegers, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)

	sum += va_arg(myintegers, int);

	va_end(myintegers);

	return (sum);
}
