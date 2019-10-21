#include <stdlib.h>
#include "dog.h"

/**
* new_dog - function that create a new dog
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: return pointer to struct
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
