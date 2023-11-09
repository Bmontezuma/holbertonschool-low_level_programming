#include "lists.h"
#include <stdlib.h>

/**
 * main - tests the print_list function
 * Return: 0 if successful, 1 if failed
 */
int main(void)
{
    list_t *head = NULL;
    list_t *node1 = NULL;
    list_t *node2 = NULL;
    list_t *node3 = NULL;

    /* Create the first node */
    node1 = malloc(sizeof(list_t));
    if (node1 == NULL)
        return (1);
    node1->str = "Hello";
    node1->len = 5;
    node1->next = NULL;

    /* Create the second node */
    node2 = malloc(sizeof(list_t));
    if (node2 == NULL)
    {
        free(node1);
        return (1);
    }
    node2->str = NULL;
    node2->len = 0;
    node2->next = NULL;

    /* Create the third node */
    node3 = malloc(sizeof(list_t));
    if (node3 == NULL)
    {
        free(node2);
        free(node1);
        return (1);
    }
    node3->str = "World";
    node3->len = 5;
    node3->next = NULL;

    /* Link the nodes together */
    head = node1;
    node1->next = node2;
    node2->next = node3;

    /* Print the list and the number of nodes */
    printf("The list contains %lu nodes:\n", print_list(head));

    /* Free the memory allocated for the nodes */
    free(node3);
    free(node2);
    free(node1);

    return (0);
}

