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
	long int f, g, h;

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
	if (d < 218922995834555169026)
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
