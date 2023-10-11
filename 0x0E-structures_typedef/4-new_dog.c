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
	unsigned int nl, ol, i;
	dog_t *dog_copy;

	dog_copy = malloc(sizeof(dog_t));
	if (dog_copy == NULL)
	{
		return (NULL);
	}
	for (nl = 0; name[nl]; nl++)
	;
	nl++;
	dog_copy->name = malloc(nl * sizeof(char));
	if (dog_copy->name == NULL)
	{
		free(dog_copy);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
	{
		dog_copy->name[i] = name[i];
	}
	dog_copy->age = age;
	for (ol = 0; owner[ol]; ol++)
	;
	ol++;
	dog_copy->owner = malloc(ol * sizeof(char));
	if (dog_copy->owner == NULL)
	{
		free(dog_copy->name);
		free(dog_copy);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
	{
		dog_copy->owner[i] = owner[i];
	}
	return (dog_copy);
}
