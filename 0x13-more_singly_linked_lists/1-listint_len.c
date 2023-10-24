#include "lists.h"
#include <stdio.h>
/**
 * listint_len - finds the number of elements
 * @h: is the list head pointer arguent
 * Return: Number of nodes/elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
