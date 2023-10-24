#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets a specific node
 * @head: pointer to head node of list
 * @index: index of a node to print
 * Return: the value of index argument
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		if (num == index)
		{
			return (head);
		}
		head = head->next;
		num++;
	}
	return (NULL);
}
