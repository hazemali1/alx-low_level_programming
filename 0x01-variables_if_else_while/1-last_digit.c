#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Get number
 *
 * Description: The last digit
 *
 * Return: Returns 0 (sucess)
*/

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	l = n % 10;
	printf("Last digit of %d", n);
	printf(" is %d", l);
if (l > 5)
{
	printf(" and is greater than 5 ");
}
else if (l == 0)
{
	printf(" and is 0 ");
}
else if (l < 6 && l != 0)
{
	printf(" and is less than 6 and not 0 ");
}
	/* your code goes there */

	return (0);
}
