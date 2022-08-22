#include "main.h"

/**
 * read_textfile -> funct that reads a text file and prints it to stdout
 * @filename: this is the name of the file
 * @letters: the number of characters to read and write
 * Return: returns the number of bytes read and written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[1024];
	int fp, rp, wp;

	fp = open(filename, O_RDWR);
	if (fp == -1)
		return (0);
	rp = read(fp, buff, letters);
	if (rp == -1)
		return (0);
	wp = write(STDOUT_FILENO, buff, rp);
	if (wp == -1)
		return (0);
	return (wp);
}
