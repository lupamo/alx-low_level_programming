#include <string.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - intitalizes a dog struct
 * @d: dog's struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	strncpy(d->name, name, sizeof(d->name) - 1);
	d->name[sizeof(d->name) - 1] = '\0';
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->owner) - 1);
	d->owner[sizeof(d->owner) - 1] = '\0';
}
