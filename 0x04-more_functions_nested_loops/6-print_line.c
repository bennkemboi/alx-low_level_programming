#include "main.h"

/**
 *print_line - function that checks for uppercase character.
 *@n:integer for the parameter
 *By Ben
 *Return: 0 success
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

