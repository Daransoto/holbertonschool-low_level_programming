#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Frees dogs.
* @d: Dog to be free'd.
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
