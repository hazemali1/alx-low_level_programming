#include<stdio.h>

/**
 * main - Numberz
 *
 * Description: Ascii
 *
 * Return: Returns 0 (sucess)
*/
int main(void)
{
	int x, s, d;

	for (x = 48; x <= 57; x++)
	for (s = 48; s <= 57; s++)
	for (d = 48; d <= 57; d++)
{
	if (x != s && x != d && s != d && s > x && d > s && d > x)
{
	putchar(x);
	putchar(s);
	putchar(d);
	if (x < 55 || s < 56 || d < 57)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
