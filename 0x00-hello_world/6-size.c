#include <stdio>
/**
 * main - new program
 *
 * Return: Always 0
 */
int main(void)
{
int a;
long int c;
long long int e;
char d;
float b;

printf("Size of int: %ld bytes\n", (unsigned long)sizeof(a));
printf("Size of float: %ld bytes\n", (unsigned long)sizeof(b));
printf("Size of long long int: %ld bytes\n", (unsigned long)sizeof(e));
printf("Size of char: %ld bytes\n", (unsigned long)sizeof(d));
printf("size of long int: %1d bytes\n", (unsigned long)sizeof(c));
return (0);
}
