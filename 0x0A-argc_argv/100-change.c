#include <stdio.h>
#include <stdlib.h>

/**
 * main - change cents
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 0,1
*/
int main(int argc, char *argv[])
{
	int s;
	int d = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[2]);
	while (s >= 25)
	{
		s = s - 25;
		d++;
	}
	while (s >= 10)
	{
		s = s - 10;
		d++;
	}
	while (s >= 5)
	{
		s = s - 5;
		d++;
	}
	while (s >= 2)
	{
		s = s - 2;
		d++;
	}
	while (s >= 1)
	{
		s = s - 1;
		d++;
	}
	printf("%d\n", d);
	return (0);
}
