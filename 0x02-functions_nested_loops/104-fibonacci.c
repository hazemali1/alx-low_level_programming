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
	long int s = 1;
	long int d = 2;
	long int f, g, h, o, p, q, z, l;

	printf("%ld, ", s);
	printf("%ld, ", d);
	for (g = 0; g < 44; g++)
	{
	f = s + d;
	h = f;
	printf("%ld, ", f);
	f = h + d;
	d = f;
	printf("%ld", d);
	printf(", ");
	s = h;
	}
	for (l = 0; l < 4; l++)
	{
	f = s + d;
	h = f;
	o = f / 1000000000;
	p = f % 1000000000;
	printf("%ld", o);
	printf("%ld, ", p);
	f = h + d;
	d = f;
	q = d / 1000000000;
	z = d % 1000000000;
	printf("%ld", q);
	printf("%ld, ", z);
	if (l < 3)
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
