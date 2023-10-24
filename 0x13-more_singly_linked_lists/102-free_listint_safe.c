#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to pointer of head/list
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodePtr;
	listint_t *present, *tmp;

	nodePtr = 0;

	if (!h || !(*h))
	{
		return (nodePtr);
	}
	present = *h;

	while (present)
	{
		tmp = present->next;
		free(present);
		present = tmp;
		nodePtr++;
	}
	*h = NULL;
	return (nodePtr);
}
