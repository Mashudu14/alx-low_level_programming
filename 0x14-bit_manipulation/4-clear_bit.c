#include "main.h"

/**
 * clear_bit - Set the value of  bit
 * @n: Pointer to the numb to change
 * @index: Index of the bit
 *
 * Return: The success number 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
