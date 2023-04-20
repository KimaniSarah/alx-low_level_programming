#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n:the number of arguments
 * @separator: separates the numbers
 * Return:the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int h;
	int num;
	va_list arg;

	va_start(arg, n);
	for (h = 0; h < n; h++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
