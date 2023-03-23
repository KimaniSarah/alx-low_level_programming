#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int g;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < size; g++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
