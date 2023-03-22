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
	long int f, g, h, o, p, q, z, l, r, x, w;

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
	r = s / 1000000000;
	u = s % 1000000000;
	o = d / 1000000000;
	p = d % 1000000000;
	for (l = 0; l < 4; l++)
	{
	f = r + o;
	w = u + p;
	h = f;
	x = w;
	printf("%ld", f);
	printf("%ld, ", w);
	f = o + h;
	w = p + x;
	o = f;
	p = w;
	printf("%ld", o);
	printf("%ld, ", p);
	if (l < 3)
	{
		printf(", ");
	}
	else
	{
		printf("\n");
	}
	r = h;
	u = x;
	}
	return (0);
}
