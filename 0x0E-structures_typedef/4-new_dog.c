#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Function of dog
 * @s: evaluate of string
 *
 * Return: calcute a length of string
 */
int _strlen(char *s)
{
	int b;

	b = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	return (b);
}

/**
 * *_strcpy - analyse the string point
 * involved a terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: point which can copy string to the buffer
 * @src: copy the string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, b;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (b = 0; b < len; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
