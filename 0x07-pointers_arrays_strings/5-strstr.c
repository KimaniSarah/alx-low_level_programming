#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack:the string the needle is looked for in
 * @needle: the string containing the substring to be found
 *
 * Return:pointer to the beginning of substring
 * ,or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p_haystack = haystack;
	char *p_needle = needle;

	for (; *p_haystack != '\0'; p_haystack++)
	{
		if (*p_haystack == *p_needle)
		{
			return (p_haystack);
		}
	}
	return (NULL);
}
