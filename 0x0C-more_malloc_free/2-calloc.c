#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Memory that  constant byte
 * @s: filed a memory area
 * @b: character to copy
 * @n: number of time to be copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}

	return (s);
}

/**
 * *_calloc - Memory to be allocates
 * @nmemb: element number in the array
 * @size: size of each element
 *
 * Return: a  pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
