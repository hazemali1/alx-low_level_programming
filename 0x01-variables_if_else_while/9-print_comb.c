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
	int x;

	for (x = 48; x <= 57; x++)
{
	putchar(x);
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
