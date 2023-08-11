#include <stdlib.h>
#include "main.h"

/**
 * *array_range -Integers must be created
 * @min: min values stored
 * @max: max number of elements and range values
 *
 * Return: new array to the pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int g, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (g = 0; min <= max; g++)
		ptr[g] = min++;

	return (ptr);
}
