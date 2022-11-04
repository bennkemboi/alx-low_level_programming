#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where to copy memory to
 * @n: number of bytes
 * @src:memory location to copy from
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
