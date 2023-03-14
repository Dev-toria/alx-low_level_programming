#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array of type unsigned int
 * @c: char to be contained in the array
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *s = malloc(size);

		if (s != NULL)
		{
			int i, j;
			
			j = (int) size;

			for (i = 0; i < j; i++)
			{
				s[i] = c;
			}
		}
		else
		{
			return (s);
		}
	}
	return (NULL);
}
