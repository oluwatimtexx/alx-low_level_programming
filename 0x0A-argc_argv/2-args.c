#include <stdio.h>
/**
 * main - print the arguments passed into the program
 * @argc: int and also counter
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
