#include "main.h"

/**
 * binary_to_uint - Convert the  binary number to an unsigned int
 * @b: Pointing to astrings of chars
 *
 * Return: The converted numbers,if there is one or more
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (g = 0; b[g]; g++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[g] - '0');
	}

	return (dec_val);
}
