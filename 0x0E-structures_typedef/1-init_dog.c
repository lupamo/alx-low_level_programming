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
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
