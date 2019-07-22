#include <stdlib.h>
#include "dog.h"
/**
* new_dog - Creates a new dog.
* @name: Name for the dog.
* @age: Age for the dog.
* @owner: Owner of the dog.
* Return: New dog created.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret_dog = malloc(sizeof(dog_t));

	if (!ret_dog)
		return (0);

	ret_dog->name = name;
	ret_dog->age = age;
	ret_dog->owner = owner;
	return (ret_dog);
}
