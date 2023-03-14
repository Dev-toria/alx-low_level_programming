#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: string input to be duplicated
 * Return: A pointer to the duplicated string otherwise NULL
 * if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *rtS;

	if (str == NULL)
	{
		rtS = NULL;
	} else
	{
		int size = strlen(str);
		char *s = malloc(size + 1);
		int i;

		if (s != NULL)
		{
			for (i = 0; i < size; i++)
			{
				s[i] = str[i];
			}
		}
		rtS = s;
	}
	return (rtS);
}
