#include <stdio.h>

/**
 * main - Print
 *
 * Description: Aplly
 *
 * Return: Returns 0 (sucess)
*/
int main(void)
{
	int x;
x = 97;
while (x <= 122)
{
if (x != 101 && x != 113)
{
	putchar(x);
	x++;
}
}
	putchar('\n');
	return (0);
}
