#include "main.h"
/**
 * _puts_recursion - Entry to function that prints a string
 * @s: pointer to string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int count = 0;

	if (s[count] = '\0')
	{
		_putchar(s[count]);
		count++;
	}
	else
		_putchar('\n');
}
