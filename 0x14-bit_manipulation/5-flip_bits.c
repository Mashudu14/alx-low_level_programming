#include "main.h"

/**
 * flip_bits - Returns the num of bits you would nneed filp
 * To get from one num to another
 * @n: 1 numb
 * @m: 2  numb
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, cnt = 0;
	unsigned long int current;
	unsigned long int number = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = number >> b;
		if (current & 1)
			cnt++;
	}

	return (cnt);
}
