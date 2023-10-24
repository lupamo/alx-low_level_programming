#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the linked list
 * @head: pointer to head list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
