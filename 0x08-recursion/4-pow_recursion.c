#include "main.h"
/**
 * _pow_recursion - calculate the power of number
 * @x: input variable
 * @y: second input variable
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0);
	{
		return (_pow_recursion (x ^ y));
	}
	if y < 0;
	{
		return (-1);
	}
}
