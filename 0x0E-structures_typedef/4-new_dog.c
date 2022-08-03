#include <stdio.h>
#include <stdlib.h>
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
	dog_t *dogs;

	dogs  =(dog_t *)malloc(sizeof(dog_t));
	if (dogs == NULL)
	{
		free(dogs);
		return (NULL);
	}
	dogs->name = name;
	dogs->age = age;
	dogs->owner = owner;
	return (dogs);
}
