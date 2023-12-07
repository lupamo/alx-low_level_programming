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

	nodeNew = malloc(sizeof(dlistint_t));
	if (!*h || idx == 0)
	{
		if (nodeNew == NULL)
		{
			return (0);
		}
		nodeNew->n = n;
		nodeNew->prev = NULL;
		nodeNew->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = nodeNew;
		}
		*h = nodeNew;
		return (nodeNew);
	}
	else
	{
		top = *h;
		for (j = 0; j < idx - 1 && top != NULL; j++)
		{
			top = top->next;
		}
		if (top == NULL || j != idx - 1)
		{
			return (0);
		}
		nodeNew->n = n;
		nodeNew->next = top->next;
		nodeNew->prev = top;
		if (top->next == NULL)
			top->next->prev = nodeNew;
		top->next = nodeNew;
	}
	return (nodeNew);
}
