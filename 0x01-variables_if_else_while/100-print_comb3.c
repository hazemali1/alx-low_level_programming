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
	int x, s;

	for (x = 48; x <= 57; x++)
	for (s = 48; s <= 57; s++)
{
	if (x != s && s > x)
{
	putchar(x);
	putchar(s);
	if (x < 56 || s < 57)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
