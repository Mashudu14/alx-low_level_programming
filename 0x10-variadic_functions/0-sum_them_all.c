#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its paramter
 * @n: number of paramters passe to the function
 * @...: A variable number of element be use by paramter
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int g, sum = 0;

	va_start(ap, n);

	for (g = 0; g < n; g++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
