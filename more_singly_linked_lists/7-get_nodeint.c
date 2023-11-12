#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t.
 * @head: Pointer to the head of the list.
 * @index: Index of the node.
 *
 * Return: Pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
	current = current->next;
	}

		return (current);
}
