#include "main.h"
#include <stdio.h>
/**
 * _abs - function that compute the absolute value of an integer
 *
 * @c: int for comparing
 *
 * Return: Always 0
 */
int _abs(int c)
{
	int ret;

	if (c >= 0)
		ret = c * 1;
	else
		ret = c * -1;
	return (ret);
}
