#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- Entry point
 * Description: takes two arguments and prins their
 * product
 * @argc: argument count
 * @argv: array of string parameter
 * Return: Always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int product = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	product *= atoi(argv[i]);
	printf("%d\n", product);
	return (0);
}
