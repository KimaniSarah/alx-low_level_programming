#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: the string as input
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int a;
	int capitalize_next = 1;
	int len = strlen(s);

	for (a = 0; a < len; a++)
	{
		if (isspace(s[a]) || s[a] == ',' || s[a] == ';' || s[a] == '.' ||
				s[a] == '!' || s[a] == '?' || s[a] == '"' || s[a] == '(' ||
				s[a] == ')' || s[a] == '}' || s[a] == '{')
		{
		capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			s[a] = toupper(s[a]);
			capitalize_next = 0;
		}
	}
	return (s);
}
