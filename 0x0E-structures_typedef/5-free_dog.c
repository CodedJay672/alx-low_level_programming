#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -> function that frees dogs
 * @d: pointer dog memory address
 */

void free_dogs(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}
	free(d);
	return;
}
