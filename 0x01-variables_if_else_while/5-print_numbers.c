#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char num = '0';
	int i = 0;
	/* your code goes there */
	while (i < 10)
	{
		putchar(num);
		num++;
		i++;
	}
	putchar('\n');
	return (0);
}
