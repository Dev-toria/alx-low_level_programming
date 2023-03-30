#include "main.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("[%u]", h->len);
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
