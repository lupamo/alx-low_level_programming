#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index: inserts a node at a given position
 * @head: pointer to linked list
 * @idx: where to insert the node
 * @n: number to be inserted
 * Return: Address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newPtr, *present;
	unsigned int j;

	if (head == NULL)
	{
		return (NULL);
	}
	newPtr = malloc(sizeof(listint_t));
	if (newPtr == NULL)
	{
		return (NULL);
	}
	newPtr->n = n;

	if (idx == 0)
	{
		newPtr->next = *head;
		*head = newPtr;
		return (newPtr);
	}
	present = *head;
	for (j = 0; j < idx - 1 && present != NULL; j++)
	{
		present = present->next;
	}
	if (present == NULL)
	{
		free(newPtr);
		return (NULL);
	}
	newPtr->next = present->next;
	present->next = newPtr;
	return (newPtr);
}
