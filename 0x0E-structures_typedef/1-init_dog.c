#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -it initializes a variable of type struct dong.
 * @d:it is the poiter to struct dog.
 * @name:it is the  name of dog to initialize.
 * @age: it is the age of the dog .
 * @owner:it is the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
