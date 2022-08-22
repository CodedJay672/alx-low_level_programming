#include "main.h"

/**
 * create_file -> function that creates a new file
 * @filename: string representing the file name
 * @text_content: string representing the file content
 * Return: returns 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fp, wp;
	int count = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[count])
		count++;
	fp = open(filename, O_WRONLY|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR);
	if (fp == -1)
		return (-1);
	wp = write(fp, text_content, count);
	if (wp == -1)
		return (-1);
	close(fp);
	return (1);
}
