#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*calculate)(int, int);

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op[0] != '+' || op[0] != '-' || op[0] != '*' || op[0] != '/' || op[0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calculate = get_op_func(op);
	if (calculate == NULL)
		return (0);
	result = calculate(num1, num2);
	printf("%d\n", result);
	return (0);
}
