#include "main.h"
#include <stdio.h>
/**
 * _islower - function that checks for a lowercase character
 *
 * @c: int for comparing
 *
 * Return: Always 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
