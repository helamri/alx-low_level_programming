#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - function that prints
 * a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t count = 0;
if (head == NULL)
{
exit(98);
}
while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
break;
}
}
while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next->next;
}
return (count);
}
