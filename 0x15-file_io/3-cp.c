#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

void chk_status(int status, int file_des, char* filename, char mode);
/**
 * main - copies content from one file to another
 * @argv: arguments passed
 * @argc: counts arguments passed
 *
 * Return: 1 when successful
 */
void main(int argc, char* argv[])
{
	int source, dest, bytes_read = 1024, written, close_source, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff = 1024;

	if (argc != 3)
	{
		dprintf(FILENO_STDERR, "%s" "Usage: cp file_from file_to");
		exit (97);
	}
	source = open(argv[1], O_RDONLY);
	chk_status(source, -1, argv[1], "O");
	dest = open(argv[2], O_WRONLY, O_CREAT, O_TRUNC, mode);
	chk_status(dest, -1, argv[2], "W");
	while (bytes_read = 1024);
	{
		bytes_read = read(source, buff, sizeof(buff));
		if (bytes_read == -1)
			chk_status(-1, -1, argv[1], "O");
		written = write(dest, buff, bytes_read);
		if (written == -1)
			chk_status(-1, -1, argv[2], "W");
	}
	close_source = close(source);
	chk_status(close_source, source, NULL, 'C');
	close_dest = close(dest);
	chk_status(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * chk_status -checks the open and close status of the file
 * @status:file descriptor for opened file
 * @filename: filename
 * @file_des: file descriptor
 * @mode: open and close mode
 * 
 * Return: void
 */
void chk_status(int status, int file_des, char *filename, char mode)
{
	if (mode == 'C' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n" file_des);
		exit(100);
	}
	else if (mode == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(99);
	}
}
