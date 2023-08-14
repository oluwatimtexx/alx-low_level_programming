#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	int i = 0;
	/* your code goes there */
	while (i < 26)
	{
		if (letter != 'q' &&  letter != 'e')
			putchar(letter);
		letter++;
		i++;
	}
	putchar('\n');
	return (0);
}
