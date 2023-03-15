#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int e, f, g, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (e = 0; s1[e] != '\0'; e++)
		;
	for (f = 0; s2[f] != '\0'; f++)
		;

	a = malloc((e * sizeof(*s1)) + (f * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (g = 0, d = 0; c < (e + f + 1); g++)
	{
		if (g < e)
			a[g] = s1[g];
		else
			a[g] = s2[d++];
	}

	return (a);
}
