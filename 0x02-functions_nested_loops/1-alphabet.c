#include "main.h"
/**
 * print_alphabet - function to print lowercase alphabets
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
