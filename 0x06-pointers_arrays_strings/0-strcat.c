#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two strings.
 * @dest: the pointer as input
 * @src:
 *
 * return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
