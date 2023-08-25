#include "main.h"
/**
 * leet - Entry point to enccoder
 * @a: pointer to string
 * Return: encryption
 */

char *leet(char *a)
{
	int c1, c2;
	char message[] = "aAeEoOtTlL";
	char encode[] = "4433007711";

	for (c1 = 0; a[c1] != '\0'; c1++)
	{
		for (c2 = 0; message[c2] != '\0'; c2++)
		{
			if (a[c1] == message[c2])
			{
				a[c1] = encode[c2];
			}
		}
	}
	return (a);
}
