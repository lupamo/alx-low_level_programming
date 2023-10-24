#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - adds a list
 * @head: pointerto hed node in list
 * Return: sum of node elements in list
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
