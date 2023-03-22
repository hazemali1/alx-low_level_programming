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
	long long int s = 1;
	long long int d = 2;
	long long int f, g, h;

	printf("%lld, ", s);
	printf("%lld, ", d);
	for (g = 0; g < 48; g++)
	{
	f = s + d;
	h = f;
	printf("%lld, ", f);
	f = h + d;
	d = f;
	printf("%lld", d);
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
