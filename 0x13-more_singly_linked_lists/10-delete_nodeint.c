#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at an index
 * of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * @index: the index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i;
if (head == NULL || *head == NULL)
{
return (-1);
}
temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
for (i = 0; i < index && temp != NULL; i++)
{
prev = temp;
temp = temp->next;
}
if (temp == NULL)
{
return (-1);
}
prev->next = temp->next;
free(temp);
return (1);
}
