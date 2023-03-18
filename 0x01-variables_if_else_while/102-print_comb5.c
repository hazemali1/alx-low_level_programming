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
	int x = 0, s;

	while (x <= 99)
	{
		s = x;
		while (s <= 99)
		{
			if (s != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);

				if (x != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
