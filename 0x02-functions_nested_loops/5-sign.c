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
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}

}
