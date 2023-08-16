#include "function_pointers.h"
/**
 * int_index - Returns the index of the element
 * @array: Array
 * @size: Number of elements
 * @cmp: pointer to the function to be used
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
