#include "main.h"
/**
 * perf_sqrt - return the perfect square root of a num
 * @n: number to find the root
 * @i: root of perf_sqrt
 */

int perf_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if ( i * i == n)
		return (i);
	else
		return (perf_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - funtion that return the square root of a number
 * @n: number to find the root
 * Return: n or -1
 */

int _sqrt_recursion(int n)
{
	return (perf_sqrt(n, 1));
}
