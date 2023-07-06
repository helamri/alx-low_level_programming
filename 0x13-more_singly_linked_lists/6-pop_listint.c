#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: the head node’s data (n), 0 if empty
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;
if (head == NULL || *head == NULL)
{
return (0);
}
temp = *head;
data = temp->n;
*head = temp->next;
free(temp);
return (data);
}
