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
	long int s = 0;
	long int d = 1;
	long int f, g, h, o, p, l, r, u;

	for (g = 0; g < 92; g++)
	{
	f = s + d;
	printf("%ld, ", f);
	s = d;
	d = f;
	}
	r = s / 10000000000;
	u = s % 10000000000;
	o = d / 10000000000;
	p = d % 10000000000;
	for (g = 93; g < 99; g++)
	{
	h = r + o;
	l = u + p;
	if (u + p > 9999999999)
	{
		h += 1;
		l %= 10000000000;
	}
	printf("%ld%d", h, l);
	if (g != 98)
	printf(", ");
	r = o;
	u = p;
	o = h;
	p = l;
	}
	printf("\n");
	return (0);
}
