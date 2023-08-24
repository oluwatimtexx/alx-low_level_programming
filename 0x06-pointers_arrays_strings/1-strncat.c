#include "main.h"

/**
 * _strncat - Entry point to funct that concatinates 2 strings
 * @dest: first pointer to a string
 * @src: second pointer to a string
 * @n: number of characters to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count2, count3;

	for (count2 = 0; dest[count2] != '\0'; count2++)
		;

	for (count3 = 0; count3 < n && src[count3] != '\0'; count3++)
	{
		dest[count2 + count3] = src[count3];
	}
	dest[count2 + count3] = '\0';

	return (dest);
}
