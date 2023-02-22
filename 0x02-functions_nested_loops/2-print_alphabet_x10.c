#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print lowercase alphabets ten times
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
	putchar('\n');
	}
}
