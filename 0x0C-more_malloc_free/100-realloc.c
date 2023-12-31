#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates memory block
 * @ptr: Previsouly memory allocated by malloc
 * @old_size: size of memory allocated for ptr
 * @new_size: new size and new memory
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int g;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (g = 0; g < new_size; g++)
			ptr1[g] = old_ptr[g];
	}

	if (new_size > old_size)
	{
		for (g = 0; g < old_size; g++)
			ptr1[g] = old_ptr[g];
	}

	free(ptr);
	return (ptr1);
}
