#include "lists.h"
/**
 *  *reverse_listint - reverses a  list
 *  @head: pointer to head node /list
 *  Return: a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *top, *others;

	if (*head == NULL)
	{
		return (NULL);
	}
	top = *head;
	others = top->next;

	if (others == NULL)
	{
		return (top);
	}
	reverse_listint(&others);
	top->next->next = top;
	top->next = NULL;
	*head = others;

	return (others);
}
