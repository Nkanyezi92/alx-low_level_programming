#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * op_mod - 5 functions
 * op_div - 5 functions
 * op_sub - 5 functions
 * op_add - 5 functions
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
