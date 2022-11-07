#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - _strlen
 * @s: char
 * Return: char *
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	;
	return (k);
}

/**
 * new_dog - new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*Init new dog* struc */
	dog_t *d;
	char *newname;
	char *newowner;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	/*Malloc new var*/
	newname = malloc((_strlen(name) + 1) * sizeof(char));
	if (newname == NULL)
	{
		free(d);
		return (NULL);
	}
	newowner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (newowner == NULL)
	{
		free(newname);
		free(d);
		return (NULL);
	}
	for (i = 0; i < _strlen(name); i++)
		newname[i] = name[i];
	newname[i] = '\0';
	for (i = 0; i < _strlen(owner); i++)
		newowner[i] = owner[i];
	newowner[i] = '\0';

	(*d).name = newname;
	d->owner = newowner;
	(*d).age = age;

	return (d);
}
