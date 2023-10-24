#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node from a specific index number
 * @head: pointer to head of list
 * @index: index to be deleted
 * Return: 1 if success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present, *tmp;
	unsigned int j;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	present = *head;
	for (j = 0; j < index - 1 && present != NULL; j++)
	{
		present = present->next;
	}
	if (present == NULL || present->next == NULL)
	{
		return (-1);
	}
	tmp = present->next;
	present->next = tmp->next;
	free(tmp);
	return (1);
}
