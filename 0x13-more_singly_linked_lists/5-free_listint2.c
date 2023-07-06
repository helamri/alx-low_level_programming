#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: void function
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *current;
if (head == NULL || *head == NULL)
{
return;
}
current = *head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
