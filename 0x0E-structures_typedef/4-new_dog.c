#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to new string, NULL if func fail
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	new_str[i] = '\0';
	return (new_str);
}

/**
 * new_dog - creates struct for new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner name
 *
 * Return: pointer to new dog, NULL if func fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
