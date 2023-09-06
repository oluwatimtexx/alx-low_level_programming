#include "main.h"
#include <stdlib.h>
/**
 * create_array: function that create array of char using malloc
 * @size: size of array
 * @c: character passed to array
 * Return: NULL or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		arr[count] = c;
	return (arr);
}
