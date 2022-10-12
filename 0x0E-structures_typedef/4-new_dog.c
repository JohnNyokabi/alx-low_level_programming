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
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	newd->name = malloc(sizeof(char) * (l1 + 1));
	if (newd->name == NULL)
	{
		free(newd);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (l2 + 1));
	if (newd->owner == NULL)
	{
		free(newd);
		free(newd->name);
		return (NULL);
	}
	_strcpy(newd->name, name);
	_strcpy(newd->owner, owner);
	newd->age = age;
	return (newd);
}
