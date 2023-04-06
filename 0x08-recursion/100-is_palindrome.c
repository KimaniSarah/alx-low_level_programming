#include"main.h"
/**
 * _len - finds length of string
 * @s:the string we are finding the length of
 *
 * Return:length
 */
int _len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _len(s + 1));
	}
}
/**
 * _palindrome - checks if string is palindrome
 * @s:the string to be checked
 * @b:the beginning index
 * @e:the end index
 *
 * Return:1 if a string is a palindrome and 0 if not.
 */
int _palindrome(char *s, int b, int e)
{
if (b >= e)
{
return (1);
}
if (s[b] == s[e])
{
	return (_palindrome(s, b + 1, e - 1));
			}
			else
			{
			return (0);
			}
			}
/**
* is_palindrome - checks if string is palindrome
*
* @s:the string to be checked
*
* Return:1 if a string is a palindrome and 0 if not.
*/
			int is_palindrome(char *s)
			{
			int length = _len(s);

			return (_palindrome(s, 0, length - 1));
					}
