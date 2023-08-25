#include "main.h"
/**
 * rot13 - Entry point to function that encodes using rot13
 * @a: pointer to string
 * Return: a
 */
char *rot13(char *a)
{
	int i, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == letter[j])
			{
				a[i] = encode[j];
				break;
			}
		}
	}
	return (a);
}
