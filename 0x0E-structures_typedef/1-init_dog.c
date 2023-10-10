#include "dog.h"
/**
 * init_dog - intitaiizes dog stuct from dog.h
 * @d: the dog struct from dog.h
 * @name: name variable in struct
 * @age: age variable in struct
 * @owner: owner variable in struct
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
