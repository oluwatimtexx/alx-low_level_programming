#include "main.h"
/**
 * prime_checker - checks for prime number
 * @n: number to check
 * @i: divider
 * Return: 0 or 1
 */

int prime_checker(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime_checker(n, i + 1));
/**
 * is_prime_number - Entry point to function that identifies a prime number
 * @n: number to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	else
		return (prime_checker(n, 2));
}
