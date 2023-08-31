#include "main.h"
/**
 * _print_rev_recursion - Entry to function that prints string in reverse
 * @s: pointer to string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	int count = 0;

	if (s[count] != '\0')
		count++;
	else
		return;
	_print_rev_recursion(&s[count]);
	count--;
	_putchar(s[count]);
}
