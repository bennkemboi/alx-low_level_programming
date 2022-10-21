#include "main.h"

/**
 * _isalpha - check a letter uppercase or lowercase
 * @c: char to be checked
 * Return: 1 (success) otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
