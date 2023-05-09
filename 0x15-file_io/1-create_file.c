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
	ssize_t write_f;

	if (filename == NULL)
	{
		return (-1);
	}

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_des == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_f = write(file_des, text_content, strlen(text_content));
		if (write_f == -1)
		{
			close(file_des);
			return (-1);
		}
	}

	close(file_des);
	return (1);
}
