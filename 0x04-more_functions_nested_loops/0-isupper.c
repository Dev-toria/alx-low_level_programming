#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 *@c: input character
 * Return: 1 if c is uppercase or 0 for otherwise
 */
int _isupper(int c)
{
	char uppercase;
	int isUpper;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
			isUpper = 1;
		else
			isUpper = 0;
	}
	return (isUpper);
}
