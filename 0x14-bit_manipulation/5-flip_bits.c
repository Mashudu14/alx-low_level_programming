#include "main.h"

/**
 * flip_bits - Counts the num of bit
 * to get bit to chng
 * @n: num 1
 * @m: num 2
 *
 * Return: num of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g, cout = 0;
	unsigned long int current;
	unsigned long int ind = n ^ m;

	for (g = 63; g >= 0; g--)
	{
		current = ind >> g;
		if (current & 1)
			cout++;
	}

	return (cout);
}
