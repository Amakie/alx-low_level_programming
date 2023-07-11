#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: character pointer
 *
 * Return: -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	int num_lett;
	int perm;

	if (filename == NULL)
	{
		return (-1);
	}

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_des == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	for (num_lett = 0; text_content[num_lett]; num_lett++)
		;

	perm = write(file_des, text_content, num_lett);
	if (perm == -1)
	{
		close(file_des);
		return (-1);
	}

	close(file_des);
	return (1);
}
