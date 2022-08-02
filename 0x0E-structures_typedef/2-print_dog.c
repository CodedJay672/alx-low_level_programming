#include <stdio.h>
#include "dog.h"

/**
 * print_dog -> prints a struct dog
 * @d: pointer to the dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
