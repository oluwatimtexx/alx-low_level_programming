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
	int j;

	while (s[count] != '\0')
		count++;

	for (j = 0; j <=count; j++)
	{
		if (s[j] == c)
			return (s + j);
		else if (s[j] == '\0')
			s = '\0';
	}
	return (s);
}
