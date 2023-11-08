#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -it will return result of desire calculation from options.
 * @argc:argument counter.
 * @argv: argument vector.
 * Return: EXIT_FAILURE (unsuccessful) otherwise EXIT_SUCCESS (success).
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*op_func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(operator);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	calc = op_func(num1, num2);
	printf("%d\n", calc);
	exit(EXIT_SUCCESS);
}
