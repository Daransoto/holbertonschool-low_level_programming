#include <stdio.h>
#include "dog.h"
/**
* print_dog - Prints a struct dog.
* @d: Pointer to dog to be printed.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			d->name = "(nil)";

		if (!(d->owner))
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		if (d->age <= 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
