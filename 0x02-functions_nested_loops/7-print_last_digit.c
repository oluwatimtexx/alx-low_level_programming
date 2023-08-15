#include "main.h"
/**
 * print_last_digit - function prints the last digit of a num
 * @num: parameter to use to accept number
 * Return: last_num
 */

int print_last_digit(int num)
{
	int last_num;

	if (num > 0)
		last_num = num % 10;
	else
		last_num = -(num % 10);
	_putchar(last_num + '0');
	return (last_num);
}
