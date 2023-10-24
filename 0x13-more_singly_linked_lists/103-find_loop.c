#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - looks for a loop
 * @head: a pointer to a linked list
 * Return: Address from head
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *flash, *sonic;

	if (!head || !head->next)
	{
		return (NULL);
	}
	flash = head->next;
	sonic = head->next->next;

	while (sonic && flash->next)
	{
		if (flash == sonic)
		{
			flash = head;
			while (flash != sonic)
			{
				flash = flash->next;
				sonic = sonic->next;
			}
			return (flash);
		}
		flash = flash->next;
		sonic = sonic->next->next;
	}
	return (NULL);
}
