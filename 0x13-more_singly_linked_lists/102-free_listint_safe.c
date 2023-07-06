#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *slow = *h;
listint_t *fast = *h;
listint_t *temp;
size_t count = 0;
if (h == NULL || *h == NULL)
{
return (0);
}
while (fast != NULL && fast->next != NULL)
{
temp = slow;
slow = slow->next;
fast = fast->next->next;
count++;
free(temp);
if (slow == fast)
{
break;
}
}
while (fast != NULL && fast->next != NULL)
{
temp = slow;
slow = slow->next;
fast = fast->next->next;
count++;
free(temp);
}
*h = NULL;
return (count);
}
