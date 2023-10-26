#include "main.h"

/**
 * print_binary - Prints the binary representation of numb
 * @n: The numb that have been stored
 */
void print_binary(unsigned long int n)
{
	int g, count = 0;
	unsigned long int arg;

	for (g = 63; g >= 0; g--)
	{
		arg = n >> g;

		if (arg & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
