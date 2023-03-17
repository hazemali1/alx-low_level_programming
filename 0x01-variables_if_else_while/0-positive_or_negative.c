#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A c program to printing
 *
 * Return: Always 0 mean it (sucess)
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	scanf("%d", &n);

if (n > 0)
{
	printf("%d", n);
	printf(" is positive\n");
}
else if (n == 0)
{
	printf("%d", n);
	printf(" is zero\n");
}
else if (n < 0)
{
	printf("%d", n);
	printf(" is negative\n");
}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
