#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x:
 *
 * Return:  the value of the last digit
 */
int print_last_digit(int x)
{
	int j = x % 10;

	_putchar(j);
	return (j);
}
