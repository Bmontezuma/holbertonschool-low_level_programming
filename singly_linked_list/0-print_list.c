#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * prototype - size_t print_list(const litst_t *h)
 * print_list - print all elements of list
 * @h: pointer to head of list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)

{
size_t count = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
count++;
h = h->next;
}
return (count);
}
