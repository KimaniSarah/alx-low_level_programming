#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int n1;
	n1 = n;

	if (n < 0)
	{
		_putchar(45);
		n1 = -n;
	}
	if (n1 > 9)
	{
		print_number(n1 / 10);
	}
	_putchar(n1 % 10 + '0');
}
