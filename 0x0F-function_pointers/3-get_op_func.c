#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - matches operator from main
 * @s: op str
 * Return: 0
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
	int x = 0;

	while (x < 10)
	{
	if (s[0] == ops->op[x])
	break;
	x++;
	}

	return (ops[x / 2].f);
}
