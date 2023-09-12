#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
	free(d);
	return (NULL);
	}
	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	d->name = malloc(a + 1);
	d->owner = malloc(b + 1);

	if (d->name == NULL || d->owner == NULL)
	{
	free(d->name), free(d->owner), free(d);
	return (NULL);
	}
	for (c = 0; c < a; c++)
	{
	d->name[c] = name[c];
	}
	d->name[c] = '\0';
	for (c = 0; c < b; c++)
	{
	d->owner[c] = owner[c];
	}
	d->owner[c] = '\0';
	d->age = age;
	return (d);
}
