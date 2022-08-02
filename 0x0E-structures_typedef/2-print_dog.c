#include <stdio.h>

/**
 * print_dog -> prints a struct dog
 * @d: pointer to the dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
