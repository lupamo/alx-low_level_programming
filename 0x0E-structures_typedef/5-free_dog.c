#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the dog struct
 * @d: dogs struct
 * Return: nothing
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
