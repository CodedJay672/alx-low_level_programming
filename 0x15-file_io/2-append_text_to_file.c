#include "main.h"

/**
 * append_text_to_file -> function that appends text to file
 * @filename: string representing the filename
 * @text_content: tsring representing the text content to append
 * Return: always 1 on success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, wp, count = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[count])
		count++;
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	wp = write(fp, text_content, count++);
	if (wp == -1)
		return (-1);
	return (1);
}
