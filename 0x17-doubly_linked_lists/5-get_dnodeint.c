#include "lists.h"
/**
 * get_dnodeint_at_index - gets node of index at n
 * @head: head node
 * @index: node index to get
 * Return: index of n node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *top = head;

	if (!head)
	{
		return (NULL);
	}
	while (top && counter < index)
	{
		/* code */
		top = top->next;
		counter++;
	}
	return (top);
}
