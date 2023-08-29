#include "main.h"
/**
 * _memset - Entry point to function that fills memory with constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int bite;

	for (bite = 0; bite < n; bite++)
	{
		s[bite] = b;
	}
	return (s);
}

