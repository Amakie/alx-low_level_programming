#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new string
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = strdup(str);
	if (!ptr)
	{
		return (NULL);
	}

	return (ptr);
}
