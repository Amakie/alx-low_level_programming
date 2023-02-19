#include <stdio.h>
/**
 * main - print letters and numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int comb;

	for (comb = 0; comb < 10; comb++)
	{
		putchar('0' + comb);
		if (comb == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
