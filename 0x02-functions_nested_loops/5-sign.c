#include "main.h"
#include <stdio.h>
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: int for comparing
 *
 * Return: Always 0
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	}
	else
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
