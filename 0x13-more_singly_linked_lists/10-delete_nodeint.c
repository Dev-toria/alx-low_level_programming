#include "lists.h"
/**
 * delete_nodeint_at_index - unction that deletes
 * the node at index index of a list.
 * @head: poiner to a list.
 * @index: node index to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *current, *tmp;

	if (head == NULL)
	{
		return (-1);
	}
	if (*head != NULL)
	{
		current = *head;
		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		while (current)
		{
			if (cnt == index - 1)
			{
				if (current->next != NULL)
				{
					tmp = current->next;
					current->next = tmp->next;
					free(tmp);
					return (1);
				}
			}
			cnt++;
			current = current->next;
		}
	}
	return (-1);
}
