#include "main.h"
/**
 * string_toupper -Entry point ot function that changes lowercase to uppercase
 * @a: pointer
 * Return: uppercase strings
 */

char *string_toupper(char *a)
{
	int count;

	for (count = 0; a[count] != '\0'; count++)
	{
		if (a[count] >= 97 && a[count] <= 122)
			a[count] =- 32;
		count++;
	}
	return (a);
}
