#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Adds a new node at the beginning of listint_t
 * @head: Pointer to the pointer of the head
 * @n: Integer value for the new node
 *
 * Return: The address of the new element, or NULL
 */

size_t print_listint(const listint_t *h);

int main(void)
{
listint_t *head = NULL;

add_nodeint(&head, 6);
add_nodeint(&head, -12);

print_listint(head);

return (0);
}

size_t print_listint(const listint_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node_count++;
}

return (node_count);
}
