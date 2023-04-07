#include <stdio.h>

/**
 * main - Print
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return argc
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
