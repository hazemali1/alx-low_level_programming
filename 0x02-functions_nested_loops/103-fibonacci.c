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
	long int f, g, b;

	while (d <= 4000000)
	{
	f = s + d;
	h = f;
	f = h + d;
	d = f;
	s = h;
	if (h % 2 == 0 && d % 2 == 0)
	b = h + d;
	}
	printf("%ld\n", b);
	return (0);
}
