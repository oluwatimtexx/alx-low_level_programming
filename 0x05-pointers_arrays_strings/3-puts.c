#include "main.h"
/**
 * _puts - Entry into void funtion to print string
 * @str: stirng holder
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
