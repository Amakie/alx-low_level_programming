#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @number_1: first number to be multiplied
 * @number_2: second number to be multiplied
 * @product: the result of the two numbers
 * @argc: counts the number of arguments
 *
 * Return: Always 0
 */
int main(int argc, int number_1, int number_2, int product)
{
	product = number_1 * number_2;

	if (argc == 2)

	{
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
