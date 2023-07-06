#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at
 * a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: the index of the list
 * @n: integer to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;
if (head == NULL)
{
return (NULL);
}
temp = *head;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 1; i < idx && temp != NULL; i++)
{
temp = temp->next;
}
if (temp == NULL && i == idx)
{
new_node->next = NULL;
temp = new_node;
return (new_node);
}
if (temp == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
