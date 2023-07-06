#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: Pointer to the beginning of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *next;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
