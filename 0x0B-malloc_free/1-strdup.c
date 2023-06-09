#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 *  @str:the string to be pointed at
 *
 *  Return:Returns NULL if str = NULL,NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;
	int h;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	ptr = (char *)malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	h = 0;
	while (h < len)
	{
		ptr[h] = str[h];
		h++;
	}
	ptr[len] = '\0';
	return (ptr);
}


