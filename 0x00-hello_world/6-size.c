#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char variableName[] = {"char", "int", "long int", "long long int", "float"};

	for (int i = 0; i <= 5; i++)
	{
		printf("size of a %s: %ld\n", variableName[i], (sizeof(variableName[i])));
	}

	return (0);
}
