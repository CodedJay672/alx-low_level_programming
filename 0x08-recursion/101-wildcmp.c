#include "main.h"
#define NULL 0

/**
 * wildcmp - checks if two strings are identical
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if true else return 0
 */

int wildcmp(char *s1,  char *s2)
{
	return (cmp_str(s1, s2, 0, _strlen(s1), _strlen(s2)));
}

int _strlen(char *s)
{
	if (s == NULL)
		return (0);
	return (1 + _strlen(s + 1));
}

int cmp_str(char *str1, char *str2, int strt, int str1_len, int str2_len)
{
	int str1_count;

	if (str2 == NULL)
		return 0;
	if (str2_len == 2 && str2[strt] == '*')
		return (1);
	if (str2[strt] == str1[str1_count] || str2[strt] == '*')
		cmp_str(str1, str2, strt + 1);
	else

}
