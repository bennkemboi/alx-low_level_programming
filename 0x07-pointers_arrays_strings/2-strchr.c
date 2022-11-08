#include "main.h"
/**
 *_strchr - will locate character
 *@s: check string
 *@c: look for this character
 *Return: apointer to the first occurance of the character @c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
