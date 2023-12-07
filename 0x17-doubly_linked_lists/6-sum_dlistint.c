#include "lists.h"
/**
 * sum_dlistint - adds item value
 * @head: first node element
 * Return: total sum
*/
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *current = head;

	if (!head)
	{
		return (0);
	}
	while (current)
	{
		count += current->n;
		current = current->next;
	}
	return (count);
}
