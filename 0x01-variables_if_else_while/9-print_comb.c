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
{
	putchar(x);
	for (s = 0; s <= 8; s++)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
