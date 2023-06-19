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
		/**
		 *  iterates over the characters in haystack, from the first character.
		 */
	{
		char *temp_haystack = p_haystack;
		char *temp_needle = p_needle;

		while (*temp_haystack == *temp_needle && *temp_needle != '\0')
			/**
			 * iterates over the characters in needle, from the first character.
			 */
		{
			temp_haystack++;
			temp_needle++;
		}
		if (*temp_needle == '\0')
			/**
			 * checks if the character pointed to by p_needle is null character ('\0').
			 * If it is, that means we've found the entire needle string in haystack
			 */
		{
			return (p_haystack);
		}
	}
	return (NULL);
}

