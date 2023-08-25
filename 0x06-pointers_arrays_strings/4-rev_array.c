#include "main.h"
/**
 * reverse_array - Entry to function that reverses an array
 * @a: this is the array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int arr;
	int count = n - 1;
	int var;

	for (arr = 0; arr < count; arr++)
	{
		var = a[arr];
		a[arr] = a[count];
		a[count] = var;
		count--;
	}
}
