#include "main.h"
/**
 * _memcpy - Entry point to function that copies memory
 * @dest: pointer to destination pf memory area
 * @src: pointer to source of memory area
 * @n: bytes to be filled
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cupe;

	for (cupe = 0; cupe < n; cupe++)
	{
		dest[cupe] = src[cupe];
	}
	return (dest);
}

