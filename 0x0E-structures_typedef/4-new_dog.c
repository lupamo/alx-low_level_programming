#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog struct
 * @name: new struct name
 * @age: new struct age
 * @owner: new struct dog's owner
 * Return:dog strct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	strncpy(dog->name, name, sizeof(dog->name) - 1);
	dog->age = age;
	strncpy(dog->owner, owner, sizeof(dog->owner) - 1);
	dog->owner[sizeof(dog->owner) - 1] = '\0';
	return (dog);
}
