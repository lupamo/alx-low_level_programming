#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node to end of list
 * @head: pointer to the list
 * @n: node to be added
 * Return: pointer to a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endPtr;

	endPtr = malloc(sizeof(listint_t));
	endPtr->n = n;

	if (*head == NULL)
	{
		*head = endPtr;
		return (NULL);
	}
	else
	{
		listint_t *temp;

		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = endPtr;
	}
	return (endPtr);
}
