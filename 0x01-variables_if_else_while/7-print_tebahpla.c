#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int letter = 122;
	int i = 26;
	/* your code goes there */
	while (i > 0)
	{
		putchar(letter);
		letter--;
		i--;
	}
	putchar('\n');
	return (0);
}
