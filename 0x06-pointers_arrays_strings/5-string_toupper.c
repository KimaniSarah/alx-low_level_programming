#include <ctype.h>
#include "main.h"
#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s:string to be changed to uppercase
 *
 * Return: uppercase s
 */
char *string_toupper(char *s)
{
	char *psk = s;

	while (*psk != '\0')
	{
		*psk = toupper(*psk);
		psk++;
	}
	return (s);
}
