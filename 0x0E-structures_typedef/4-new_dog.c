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
	dog_t *new_dog;
	char *copy_name, *orign_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	copy_name = strdup(name);
	orign_copy = strdup(owner);

	if (copy_name == NULL || orign_copy == NULL)
	{
		free(copy_name);
		free(orign_copy);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = copy_name;
	new_dog->age = age;
	new_dog->owner = orign_copy;
	return (new_dog);
}
