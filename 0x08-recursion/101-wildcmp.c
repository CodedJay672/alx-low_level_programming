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
	return (cmp_str(s1, s2, 0, 0, _strlen(s2)));
}

/**
 * _strlen - finds the length of a string
 * @s: string argument
 * Return: returns length of string
 */
int _strlen(char *s)
{
	if (s == NULL)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * cmp_str - compares two strings
 * @str1: first string
 * @str2: second string
 * @s1_strt: s1 start value
 * @s2_strt: s2 start value
 * @str2_len: length of str 2
 * Return: 1 if strings match else 0
 */
int cmp_str(char *str1, char *str2, int s1_strt, int s2_strt, int str2_len)
{
	if (str2 == NULL)
		return (0);
	if (str2_len == 2 && str2[s2_strt] == '*')
		return (1);
	if (str2[s2_strt] == str1[s1_strt] || str2[s2_strt] == '*')
		return (cmp_str(str1, str2, s1_strt, s2_strt + 1, str2_len));
	else
		return (cmp_str(str1, str2, s1_strt + 1, s2_strt, str2_len));
}
