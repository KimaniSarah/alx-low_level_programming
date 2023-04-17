#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: dog name
 * @age:dog age
 * @owner:dog owner
 * Return:dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name = strlen(name);
	int len_owner = strlen(owner);
	int h, v;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (h = 0; h < len_name; h++)
	{
		new_dog->name[h] = name[h];
	}
	new_dog->name[len_name] = '\0';
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	for (v = 0; v < len_owner; v++)
	{
		new_dog->owner[v] = owner[v];
	}
	new_dog->owner[len_owner] = '\0';
	new_dog->age = age;
	return (new_dog);
}
