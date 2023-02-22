#include "main.h"
#include <stdio.h>
/**
 * _isalpha - function that checks for an alphabetic character
 *
 * @c: int for comparing
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
