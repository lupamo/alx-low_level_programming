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
	unsigned int j = 0;

	if (!head)
	{
		return (-1);
	}
	while (top && j < index)
	{
		top = top->next;
		j++;
	}
	if (j == index && top)
	{
		if (top->prev)
		{
			top->prev->next = top->next;
		}
		if (top->next)
		{
			top->next->prev = top->prev;
		}
		if (j == 0)
			*head = top->next;
		free(top);
		return (1);
	}
	return (-1);
}
