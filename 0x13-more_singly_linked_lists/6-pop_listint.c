#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node
 * @head: pointer to lists head
 * Return: popped head node data
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
