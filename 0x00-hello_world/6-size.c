#include <stdio.h>
/**
 *main - new program
 *
 *Return: Always 0
 */
int main(void)
{
int a;
long int c;
long long int e;
char d;
float b;

printf("Size of a char: %ld bytes\n", (unsigned long)sizeof(d));
printf("Size of an int: %ld bytes\n", (unsigned long)sizeof(a));
printf("Size of a long int: %ld bytes\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %ld bytes\n", (unsigned long)sizeof(e));
printf("Size of a float: %1d bytes\n", (unsigned long)sizeof(b));
return (0);
}
