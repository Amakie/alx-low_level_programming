#include <stdio.h>
/**
 * main - alphabets except
 *
 * Return: Always 0
 */

int main(void)
{
	char qNe;

	for (qNe = 'a'; qNe <= 'z'; qNe++)
	{
		if (qNe != 'e' && qNe != 'q')
			putchar(qNe);
	}
	putchar('\n');
	return (0);
}
