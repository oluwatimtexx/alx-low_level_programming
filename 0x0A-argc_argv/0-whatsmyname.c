#include <stdio.h>
/**
 * main - prints porgram name, followed by new line
 * @argc: int and also counter
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
