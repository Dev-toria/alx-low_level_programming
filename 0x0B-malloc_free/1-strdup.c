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
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *ptstr;
		int len_count = 0;

		while (str[len_count] != '\0')
		{
			len_count++;
		}

		ptstr = malloc((len_count * sizeof(char)) + 1);
		int i;

		if (ptstr != NULL)
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				ptstr[i] = str[i];
			}
			ptstr[i] = '\0';
		}
	}
	return (ptstr);
}
