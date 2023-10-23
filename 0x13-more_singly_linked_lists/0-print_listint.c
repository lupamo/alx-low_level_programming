#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the elements in a list
 * @h: list pointer
 * Return: number of nodes in a  linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
