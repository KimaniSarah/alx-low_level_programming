#include "main.h"
/**
 * flip_bits - Calculates the number of bits you would need to flip to get
 *             from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference > 0)
	{
		if (difference & 1)
		{
			count++;
		}

		difference >>= 1;
	}

	return (count);
}
