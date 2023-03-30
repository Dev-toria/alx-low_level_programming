#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of element in a list
 * @h: pointer to the head of the list
 * Return: number of element in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);
}
