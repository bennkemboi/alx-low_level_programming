#include "main.h"
/**
 * puts2 -print one character out of two
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	for ( str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
