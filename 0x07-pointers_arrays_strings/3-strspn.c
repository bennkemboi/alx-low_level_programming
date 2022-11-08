#include "main.h"
/**
 *_strspn - length of a prefix substring
 *@s: search string
 *@accept: prefx to be measured
 *Return: the number of bytes that consist only of bytes
 *from accept
 */
unsigned int _strspn(cha *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
