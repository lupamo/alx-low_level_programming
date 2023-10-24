#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and sets head to null
 * @head: pointer to the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *present;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		present = *head;
		*head = (*head)->next;
		free(present);
	}
}
