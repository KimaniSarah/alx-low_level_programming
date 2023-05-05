#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *end = (char *)&num;

	if (*end == 1)
	{
		/**
		 * The system is little endian
		 */
		return (1);
	}
	else
	{
		/**
		 *  The system is big endian
		 */
		return (0);
	}
}

