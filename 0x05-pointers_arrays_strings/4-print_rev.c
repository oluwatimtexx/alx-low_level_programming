#include "main.h"
/**
 * print_rev - Entry into void funtion to print string
 * @s: string holder
 * Return: void
 */

void print_rev(char *s)
{
	int count;
	int index;


	for (count = 0; s[count] != '\0'; count++)
	{
	}
	index = count - 1;
	for (; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
