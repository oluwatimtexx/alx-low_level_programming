#include "main.h"
/**
 * _strcmp - Entry point to function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: str2
 */

int _strcmp(char *s1, char *s2)
{
	int str1, str2;

	str1 = 0;
	while (s1[str1] != '\0' && s1[str1] == s2[str1])
	{
		str1++;
	}
	str2 = s1[str1] - s2[str1];

	return (str2);
}
