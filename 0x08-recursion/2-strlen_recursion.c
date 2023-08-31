#include "main.h"
/**
 * _strlen_recursion - Entry point to function that returns length of a string
 * @s: pointer to string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[count] != '\0')
	{
		count++;
		return (_strlen_recursion(&s[count]) + 1);
	}
	else
		return (0);
}
