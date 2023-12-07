#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at specified index
 * @head: head node
 * @index: specifid index
 * Return:  1 if success or -1 failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *top = *head;
	unsigned int j;

	if (*head == NULL || index == 0)
	{
		if (*head != NULL)
		{
			if ((*head)->next != NULL)
				(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		free(top);
		return (1);
	}
	else
	{
		for (j = 0; j < index - 1 && top != NULL; j++)
			top = top->next;
		if (top == NULL ||top->next == NULL || j != index - 1)
		{
			return (-1);
		}
		if (top->prev != NULL)
		{
			top->prev->next = top->next;
		}
		
		if (top->next != NULL)
			top->next->prev = top->prev;
		free(top);
		top->next = top->next->next;
		return (1);
	}
}
