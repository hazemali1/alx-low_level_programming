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
	long int f, h, b, v, m;

	while (d <= 4000000)
	{
	f = s + d;
	h = f;
	f = h + d;
	d = f;
	s = h;
	if (h % 2 == 0)
	{
	v = h;
	}
	if (d % 2 == 0)
	{
	m = d;
	}
	b = v + m + 2;
	}
	printf("%ld\n", b);
	return (0);
}
