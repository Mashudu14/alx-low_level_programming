#include "main.h"

/**
 * flip_bits - Return the num ofbits you need to flip
 * 
 * @n: Bits that we must get firstly
 * @m: Bits that we must find
 *
 * Return: Bits must return
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g, cnt = 0;
	unsigned long int current;
	unsigned long int number = n ^ m;

	for (g = 63; g >= 0; g--)
	{
		cnt = number >> g;
		if(current & 1)
			cnt++;
	}

	return (cnt);
}
