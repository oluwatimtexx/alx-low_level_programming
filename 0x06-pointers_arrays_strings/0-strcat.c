#include "main.h"

/**
 * _strcat - Entry point to funct that concatinates 2 strings
 * @dest: first pointer to a string
 * @src: second pointer to a string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2;

	for (count2 = 0; dest[count2] != '\0'; count2++)
		;
	do {
		dest[count2] = src[count1];
		count2++;
		count1++;
	} while (src[count1] != '\0');

	return (dest);
}
