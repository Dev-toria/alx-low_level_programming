#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 * @head: pointer to a list.
 * @idx: index to insert new node.
 * @n: valuse for new node.
 * Return: the address of the new node, or NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int tmp = 0;
	listint_t *new = malloc(sizeof(listint_t)), *current;

	if (new == NULL || head == NULL)
	{
		if (new != NULL)
			free(new);
		return (NULL);
	}
	new->n = n;
	current = *head;
	if (idx == 0)
	{
		new->next = NULL;
		if (current != NULL)
		{
			new->next = current;
		}
		*head = new;
		return (new);
	}
	while (current)
	{
		if (tmp == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		tmp++;
		current = current->next;
	}
	return (NULL);
}
