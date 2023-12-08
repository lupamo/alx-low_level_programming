#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a specific index
 * @h: node head
 * @idx: index node where to add node
 * @n: value to be added
 * Return: 0 if unsuccesful else address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodeNew;
	dlistint_t *top;
	unsigned int j;

	if (!h)
	{
		return (0);
	}
	nodeNew = malloc(sizeof(dlistint_t));

	if (!nodeNew)
	{
			return (0);
	}
	nodeNew->n = n;
	if (!(*h) && idx == 0)
	{
		*h = nodeNew;
		return (nodeNew);
	}
	top = *h;
	while (top->next && j < idx)
	{
		top = top->next;
		j++;
	}
	if (j == idx)
	{
		nodeNew->next = top;
		if (top->prev)
			top->prev->next = nodeNew;
		else
			*h = nodeNew;
		nodeNew->prev = top->prev;
		top->prev = nodeNew;
	}
	else if (idx == j + 1)
	{
		top->next = nodeNew;
		nodeNew->prev = top;
	}
	else
	{
		free(nodeNew);
		return(0);
	}
	return (nodeNew);
}