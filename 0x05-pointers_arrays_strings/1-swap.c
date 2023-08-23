#include "main.h"
/**
 * swap_int - Entry to void function
 * @a: first parameter and also a pointer
 * @b: second parameter and also a pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int total = *a + *b;
	*b = total - *b;
	*a = total - *a;
}
