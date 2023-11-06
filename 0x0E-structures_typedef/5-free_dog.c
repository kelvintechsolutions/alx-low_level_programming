#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -it will free memory allocated to a struct dog.
 * @d:this is the struct dog to free.
 * return(0)if successful.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
