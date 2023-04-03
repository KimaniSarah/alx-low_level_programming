#include "main.h"
/**
 * _memcpy -  copies memory area.
 * @dest: destination string , copied to
 * @src: source string ,copied from
 * @n: no of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;
	char *p_dest = dest;
	char *p_src = src;
	/**
	 * initialized to dest & src to avoid altering the original ones
	 */

	for (h = 0; h < n ; h++)
	{
		p_dest[h] = p_src[h];
		/**
		 * copy value from src in hth value to dest in hth value
		 */
	}
	return (dest);
}
