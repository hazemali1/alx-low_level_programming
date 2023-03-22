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
	int s = 1;
	int d = 2;
	int f, g, h;

	printf("%d, ", s);
	printf("%d, ", d);
	for (g = 0; g < 50; g++)
	{
	if (f <= 20365011074 && d <= 20365011074)
	{
	f = s + d;
	h = f;
	printf("%d, ", f);
	f = h + d;
	d = f;
	printf("%d, ", d);
	s = h;
	}
	}
	return (0);
}
