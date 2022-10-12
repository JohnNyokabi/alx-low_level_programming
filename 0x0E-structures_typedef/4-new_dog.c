#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - computes the length of a string
 * @str: pointer to a string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies string from src to dest
 * @dest: pointer to destination of string
 * @src: pointer the source of the string
 *
 * Return: value at dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
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
	dog_t *newd;

	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (newd->name == NULL)
		return (NULL);
	_strcpy(newd->name, name);
	newd->age = age;
	if (owner == NULL)
	{
		free(newd->owner);
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newd->owner == NULL)
		return (NULL);
	_strcpy(newd->owner, owner);
	return (newd);
}
