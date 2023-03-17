#include<stdio.h>

/*
 *main - Entry point
 *
 *Description: A c program to printing
 *
 *Return: Always 0 mean it (sucess)
 */
int main(void)
{
	printf("Size of a char: %lu.\n",sizeof(char));
	printf("Size of an int: %lu.\n",sizeof(int));
	printf("Size of a long int: %lu.\n",sizeof(long int));
	printf("Size of a long long int: %lu.\n",sizeof(long long int));
	printf("Size of a float: %lu.\n",sizeof(float));
		return (0);
}
