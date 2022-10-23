#include "main.h"
/**
 * print_numbers - print nums from 0 to 9
 * Return: 0
 *
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
