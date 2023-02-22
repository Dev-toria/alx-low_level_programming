#include "main.h"
/**
 * print_to_98 - function to print from a certain number to 98
 *
 * @n: integer value to be entered for computation
 *
 * Return: Always 0 (success);
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
		{
			printf(",");
		}
		n--;
		}
	}
	printf("\n");
}
