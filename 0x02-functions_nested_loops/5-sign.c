#include "main.h"
/**
 * print_sign - Entry point
 * @n: is used to recieve input into the function
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
