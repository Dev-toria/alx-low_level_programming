#include "lists.h"
/**
 * reverse_listint - function that reverses a list.
 * @head: pointer to list
 * Return: pointer to new head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL)
	{
		return (NULL);
	}
	prev = NULL;
	if (*head != NULL)
	{
		while (*head)
		{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
		}
	}
	*head = prev;
	return (*head);
}
