#include <stdio.h>
#include "dog.h"

/**
 * new_dog -> function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner name
 * Return: return pointer to new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dog_1;

	dog_1 = malloc(sizeof(struct dog_t));
	if (dog_1 == NULL)
		return (NULL);
	name = dog->name;
	owner = dog->owner;
	return (dog_1);
}
