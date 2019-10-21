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
	char *namecpy;
	char *ownercpy;
	int i = 0;

	namecpy = malloc(sizeof(name) * sizeof(char));
	if (namecpy == NULL)
		return (NULL);
	ownercpy = malloc(sizeof(owner) * sizeof(char));
	if (ownercpy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		namecpy[i] = name[i];
	namecpy[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		ownercpy[i] = owner[i];
	ownercpy[i] = '\0';
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = namecpy;
	dog->age = age;
	dog->owner = ownercpy;
	return (dog);
}
