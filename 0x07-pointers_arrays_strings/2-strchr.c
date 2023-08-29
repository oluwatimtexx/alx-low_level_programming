#include "main.h"
/**
 * _strchr - Entry point to function that locates a charater in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: c
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != c)
	{
		break;
		count++;
	}
	return (c);
}
