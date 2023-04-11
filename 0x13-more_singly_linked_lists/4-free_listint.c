#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to start of list.
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (head->next != NULL)
			{
				current = head->next;
				free(head);
				head = current;
				continue;
			}
			free(head);
			break;
		}
	}
}
