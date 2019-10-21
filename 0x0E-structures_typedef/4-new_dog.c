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
	int len1 = 0, len2 = 0;

	for (; name[len1]; len1++)
		;
	for (; owner[len2]; len2++)
		;
	namecpy = malloc(len1 * sizeof(char));
	if (namecpy == NULL)
		return (NULL);
	ownercpy = malloc(len2 * sizeof(char));
	if (ownercpy == NULL)
		return (NULL);
	for (len1 = 0; name[len1] != '\0'; len1++)
		namecpy[len1] = name[len1];
	for (len2 = 0; owner[len2] != '\0'; len2++)
		ownercpy[len2] = owner[len2];
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = namecpy;
	dog->age = age;
	dog->owner = ownercpy;
	return (dog);
}
