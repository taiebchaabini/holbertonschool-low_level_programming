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

	namecpy = name;
	ownercpy = owner;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = namecpy;
	dog->age = age;
	dog->owner = ownercpy;
	return (dog);
}
