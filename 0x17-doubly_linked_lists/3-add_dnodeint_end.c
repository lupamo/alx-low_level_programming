#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end
 * @head: head node
 * @n: node element to add
 * Return: address of added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = malloc(sizeof(dlistint_t));

	if (!last_node)
	{
		return (NULL);
	}
	last_node->n = n;
	last_node->next = NULL;
	if (*head)
	{
		dlistint_t *current_last = *head;

		while (current_last->next)
		{
			current_last = current_last->next;
		}
		current_last->next = last_node;
		last_node->prev = current_last;
	}
	else
	{
		last_node->prev = NULL;
		*head = last_node;
	}
	return (last_node);
}
