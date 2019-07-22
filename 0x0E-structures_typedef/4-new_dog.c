#include <stdlib.h>
#include "dog.h"
/**
* size - Gives the size of a string.
* @str: String to evaluate.
* Return: Length of string.
*/
int size(char *str)
{
	int c = 0;

	while (*str++)
		c++;
	return (c);
}
/**
* new_dog - Creates a new dog.
* @name: Name for the dog.
* @age: Age for the dog.
* @owner: Owner of the dog.
* Return: New dog created.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret_dog;
	char *cname, *cowner;
	int i = 0;

	if (!name)
		return (0);
	if (!owner)
		return (0);
	ret_dog = malloc(sizeof(dog_t));
	cname = malloc(size(name) + 1);
	cowner = malloc(size(owner) + 1);
	if (!ret_dog | !cname | !cowner)
		return (0);

	while ((cname[i++] = *name++))
		;
	i = 0;
	while ((cowner[i++] = *owner++))
		;

	ret_dog->name = cname;
	ret_dog->age = age;
	ret_dog->owner = cowner;
	return (ret_dog);
}
