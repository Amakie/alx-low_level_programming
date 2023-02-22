#include "main.h"
/**
 * print_alphabet - Prints alphabets to screen
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	_putchar('\n');
}
