#include "main.h"

/**
 * set_bit - Set the value of bit to gven index
 * @n: The bits that are stored
 * @index: Starting from the big of index
 *
 * Return: Worked it if is -1 error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
