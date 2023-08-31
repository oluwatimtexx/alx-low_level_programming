#include "main.h"
/**
 * _pow_recursion - Entry point to function that raised a value by another given value
 * @x: number to be raised
 * @y: number to be raised by 
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if ( y == 0)
		return (1);
	else if (y == 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
