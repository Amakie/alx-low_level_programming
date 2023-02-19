#include <time.h>
#include <stdio.h>
/**
 * main - Second code
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = num % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", num, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", num, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", num, last);
	else
		printf("Try again");
	return (0);
}
