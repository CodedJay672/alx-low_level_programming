#include "main.h"

/**
 * read_textfile -> funct that reads a text file and prints it to stdout
 * @filename: this is the name of the file
 * @letters: the number of characters to read and write
 * Return: returns the number of bytes read and written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fp, rp, wp;

	if (filename == NULL)
		return (0);
	buff = (char *)malloc(letters * sizeof(char *));
	if (buff == NULL)
		return (0);
	fp = open(filename, O_RDWR);
	if (fp == -1)
		return (0);
	rp = read(fp, buff, letters);
	if (rp == -1)
		return (0);
	wp = write(STDOUT_FILENO, buff, rp);
	if (wp == -1)
		return (0);
	close(fp);
	return (wp);
}
