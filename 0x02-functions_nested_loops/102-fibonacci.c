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
	float s = 1;
	float d = 2;
	float f, g, h;

	printf("%f, ", s);
	printf("%f, ", d);
	for (g = 0; g < 25; g++)
	{
	f = s + d;
	h = f;
	printf("%f, ", f);
	f = h + d;
	d = f;
	printf("%f, ", d);
	s = h;
	}
	return (0);
}
