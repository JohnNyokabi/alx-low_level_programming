#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, new_len, old_len;
	dog_t *d;

	if (nme == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (new_len = 0; name[new_len]; new_len++)
		;
	new_len++;
	d->name = malloc(sizeof(char) * new_len);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < new_len; i++)
		d->name[i] = name[i];
	d->age = age;
	for (old_len = 0; owner[old_len]; old_len++)
		;
	old_len++;
	d->owner = malloc(old_len * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < old_len; i++)
		d->owner[i] = owner[i];
	return (d);
}
