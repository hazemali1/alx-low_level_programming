#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main
 *
 * @argc: Parameter1
 * @argv: Parameter2
 * Return: Return 0
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*d)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	d = get_op_func(argv[2]);
	if (!d)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", d(a, b));
	return (0);
}
