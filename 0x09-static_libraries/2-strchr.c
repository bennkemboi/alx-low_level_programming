#include "main.h"
/**
 *_strchr - will locate character
 *@s: check string
 *@c: look for this character
 *Return: apointer to the first occurance of the character @c
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
