#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s:the string to be searched
 * @accept:the string to search
 *
 * Return:s ,NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_s = s;
	char *p_accept;

	for strpbrk(; *p_s != '\0'; p_s++)
	{
		p_accept = accept;

		for (; *p_accept != '\0'; p_accept++)
		{
			if (*p_s == *p_accept)
			{
				return (p_s);
			}
		}
	}
	return (NULL);
}
