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
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
