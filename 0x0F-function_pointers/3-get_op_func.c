#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func -it is a function that selects correct opcode to make operation
 * @s:it is a  type char str
 * Return:it is a  pointer to op_ of a and b return c or null (not operation).
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


	i = 0;
	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
