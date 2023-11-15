#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given position in list.
 * @head: Pointer to the address of the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
	*head = current->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(current);
		return (1);
	}

	while (current != NULL)
	{
	if (count == index)
		break;
	current = current->next;
	count++;
	}

	if (current == NULL)
		return (-1);

	temp = current->prev;
	temp->next = current->next;

	if (current->next != NULL)
	current->next->prev = temp;

	free(current);
		return (1);
}
