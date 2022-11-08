#include "main.h"
/**
 * _strbrk - will search a string for any of
 *           a set of bytes
 *@s: string to be searched
 *@accept : the set of bytes to be searched
 *Return: if a set is matched, point to matched byte
 *        NULL if set not matched
 */

char *_strbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}

