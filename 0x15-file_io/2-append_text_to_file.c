#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: the NULL terminated string
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int num_lett;
	int perm;

	if (!filename)
	{
		return (-1);
	}

	file_des = open(filename, O_APPEND);

	if (file_des == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (num_lett = 0; text_content[num_lett]; num_lett++)
			;
		perm = write(file_des, text_content, num_lett);

		if (perm == -1)
		{
			return (-1);
		}
	}

	close(file_des);
	return (1);
}
