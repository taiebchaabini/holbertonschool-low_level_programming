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
	int i = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(name) + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc(sizeof(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}
