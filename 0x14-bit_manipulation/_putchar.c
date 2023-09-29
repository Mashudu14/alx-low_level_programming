#include "main.h"

/**
 * get_endianness - Check the endianness
 * Return: 0 if big endian, i if little endian
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *c = (char *) &g;

	return (*c);
}
