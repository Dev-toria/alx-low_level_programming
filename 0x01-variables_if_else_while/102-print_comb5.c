#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 1; d < 10; d++)
				{
					putchar((char) (a + '0'));
					putchar((char) (b + '0'));
					putchar(' ');
					putchar((char) (c + '0'));
					putchar((char) (d + '0'));

					if (a == 9 && b == 8 && c == 9 && d == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
