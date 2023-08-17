#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - fuction that return the sum of parameters
* @n: The arguments number that passed
* @...: A arguments before elements
* 
* Return: If n == 0 - 0.
* Otherwise - sum of all parameter
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
