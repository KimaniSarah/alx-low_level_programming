#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n:number of arguments
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int h;
	int sum = 0;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (h = 0; h < n; h++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
