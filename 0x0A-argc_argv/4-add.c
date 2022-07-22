#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: adds two arguments together
 * @argc: argument count
 * @argv: array of strings argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
