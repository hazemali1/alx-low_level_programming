#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program to printing
 *
 * Return: Always 0 mean it (sucess)
*/
int main(void)
{
	unsigned long long int s = 1;
	unsigned long long int d = 2;
	unsigned long long int f, g, h;

	printf("%ld, ", s);
	printf("%ld, ", d);
	for (g = 0; g < 48; g++)
	{
	f = s + d;
	h = f;
	printf("%ld, ", f);
	f = h + d;
	d = f;
	printf("%ld", d);
	if (g < 47)
	{
	printf(", ");
	}
	else
	{
		printf("\n");
	}
	s = h;
	}
	return (0);
}
