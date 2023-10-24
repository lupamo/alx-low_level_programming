#include "lists.h"
#include <stdlib.h>
/**
 *  *reverse_listint - reverses a  list
 *  @head: pointer to head node /list
 *  Return: a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *others;

	next = NULL;
	others = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = others;
			others = next;
		}
		*head = others;
		return (*head);
	}
	return (NULL);
}
