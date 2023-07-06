#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: returns the nth node, NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head != NULL; i++)
{
if (i == index)
{
return (head);
}
head = head->next;
}
return (NULL);
}
