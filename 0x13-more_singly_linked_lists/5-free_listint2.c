#include "lists.h"
/**
 * free_listint2 - Entry Point
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)

{

	listint_t *tmp = NULL;

	while (head && *head)

	{

		tmp = *head;

		*head = (*head)->next;

		free(tmp);

	}

}
