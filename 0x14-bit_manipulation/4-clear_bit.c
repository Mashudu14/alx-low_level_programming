#include "main.h"

/**
 * clear_bit - The set of valus of bit at given index
 * @n: The num that are saved there
 * @index: Starting from index of the bit
 *
 * Return: Worked it if is -1 clear the error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
