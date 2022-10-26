#include "lists.h"
/**
 * print_listint_safe - Entry Point
 * @head: head
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)

{
size_t count = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
count++;
printf("[%p] %d\n", (void *)head, head->n);
if (head->next >= head)
{
printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
break;
}
head = head->next;
}
return (count);
}
