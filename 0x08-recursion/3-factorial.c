#include "main.h"
/**
 * factorial - Entry point to function that returns factorial of a given number
 * @n: Number
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
