#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * main -> Entry point
 * @argc: argument count
 * @argv: array of argument strings
 * Return: always 1 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1][0] == '\0')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from \n");
		exit(98);
	}
	if (argv[2][0] == '\0')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to \n");
		exit(99);
	}
	cp(argv[1], argv[2]);
	return (0);
}

/**
 * cp -> copies content from src file to dest file
 * @src: source filename string
 * @dest: destination filename string
 * Return: returns integer value if successful
 */

int cp(char *src, char *dest)
{
	char *buffer;
	int fp, rp, wp, cl;

	buffer = (char *)malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	fp = open(src, O_RDONLY);
	if (fp == -1)
		return (-1);
	rp = read(fp, buffer, 1024);
	if (rp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	cl = close(fp);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp\n");
		exit(100);
	}
	fp = open(dest, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fp == -1)
		return (-1);
	wp = write(fp, buffer, rp);
	if (wp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	cl = close(fp);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp\n");
		exit(100);
	}
	return (1);
}
