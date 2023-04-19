#include "3-calc.h"

/**
 * op_add - Adding
 *
 * @a: Parameter1
 * @b: Parameter2
 *
 * Return: Return add
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 *
 * @a: Parameter1
 * @b: Parameter2
 *
 * Return: Return sub
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 *
 * @a: Parameter1
 * @b: Parameter2
 *
 * Return: Return mul
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 *
 * @a: Parameter1
 * @b: Parameter2
 *
 * Return: Return div
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod
 *
 * @a: Parameter1
 * @b: Parameter2
 *
 * Return: Return mod
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
