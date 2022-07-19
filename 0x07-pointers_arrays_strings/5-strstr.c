#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search
 * @needle: substring to search for
 * Return: returns a pointer of the located string
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int strLen, subLen = 0;
	int end, subFound, i, j;

	while (haystack[strLen])
		strLen++;
	while (needle[subLen])
		subLen++;
	end = (strLen - subLen) + 1;
	i = 0;
	while (i < end)
	{
		subFound = 1;
		j = 0;
		while (j < subLen)
		{
			if  (needle[j] != haystack[i + j])
			{
				subFound = 0;
				break;
			}
			j++;
		}
		if (subFound)
		{
			haystack += i;
			return (haystack);
		}
		i++;
	}
	return ('\0');
}
