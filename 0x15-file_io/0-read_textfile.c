#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file
 * @filename: name of file
 * @letters: holds number of letters to be read and printed
 *
 * Return: NULL if file cannot be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t read_f, write_f;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	{
		close(file_des);
		return (0);
	}

	read_f = read(file_des, buffer, letters);
	close(file_des);
	if (read_f == -1)
	{
		free(buff);
		return (0);
	}
	write_f = write(STDOUT_FILENO, buff, read_f);
	free(buff);

	if (read_f != write_f)
		return (0);

	return (write_f);
}
