#include "main.h"

/**
 * get_bit - Return the valus of bit at given index
 * @n: Number that have been stored inside
 * @index: Index starting of bit you want to get
 *
 * Return: Index value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int getnum;

	if (index > 63)
		return (-1);

	getnum = (n >> index) & 1;

	return (getnum);
}
