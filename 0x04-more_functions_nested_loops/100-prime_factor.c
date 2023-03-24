#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Description: A c program to printing
 *
 * Return: Always 0 mean it (sucess)
*/
int main(void)
{
	long s, d, f = 612852475143;
	double o = sqrt(f);

	for (s = 1; s <= o; s++)
	{
	if (f % s == 0)
	{
	d = f / s;
	}
	}
	printf("ld\n", d);
	return (0);
}
