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
	int s, d = 0;

	for (s = 0; s < 1024; s++)
		if (s % 3 == 0 || s % 5 == 0)
		{
		s + = d;
		}
	printf("%d\n", d);
return (0);
}
