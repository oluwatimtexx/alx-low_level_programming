#include "main.h"
/**
 * _puts - Entry into void funtion to print string
 * @s: string holder
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;
	int index;


	while (str[count])
	{
		count++;
	}
	index = count - 1;
	for (; index >= 0; index++)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
