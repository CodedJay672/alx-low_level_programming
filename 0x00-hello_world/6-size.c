#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *variableName[] = {"char", "int", "long int", "long long int", "float"};

	for (int i = 0; i <= 5; i++)
	{
		printf("%s: %u\n", variableName[i], (unsigned int)(sizeof(variableName[i])));
	}

	return (0);
}
