#include "lists.h"
/**
 * free_listint2 - Frees a linked list and sets the head to NULL
 * @head: Pointer to pointer to the head node of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
