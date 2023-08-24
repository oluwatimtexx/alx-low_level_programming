#include "main.h"
/**
 * _strncpy - Entry point into function that copies string
 * @dest: destination where the copied string would be
 * @src: source of the string
 * @n: number of strings to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[index];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
