#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints the nodes data and number of nodes
 * @h: head node
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *top = h;

	while (top != NULL)
	{
		printf("%d\n", top->n);
		count++;
		top = top->next;
	}
	return (count);
}
