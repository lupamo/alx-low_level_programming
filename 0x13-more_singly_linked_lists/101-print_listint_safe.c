#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a list o nodes
 * @head: head node/pointer to list
 * Return: 98 if success
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *present, *check;

	present = head;
	check = head;

	while (present != NULL && present > check)
	{
		printf("%d\n", present->n);
		num++;
		present = present->next;
	}
	if (present != NULL && present < check)
	{
		printf("[%p] %d\n", (void *)present, present->n);
		num++;
		exit(98);
	}
	return (num);
}
