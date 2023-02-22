#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @c: int to compute the last digit of a number
 *
 * Return: Always 0
 */
int print_last_digit(int c)
{
	int ret;

	ret = c % 10;

	if (c < 0)
		ret = ret * -1;
	else
		ret = ret * 1;
	_putchar(ret + '0');
	return (ret);
}
