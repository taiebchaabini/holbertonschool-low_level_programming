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
	int i = 0, len1 = 0, len2 = 0;

	for (; name[len1] != '\0'; len1++)
		;
	for (; owner[len2] != '\0'; len2++)
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc((len1 + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc((len2 + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
