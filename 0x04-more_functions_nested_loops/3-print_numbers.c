#include "main.h"
/**
 * print_numbers - print nums fro 0 to 9
 *
 *Return: void
 *
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putcha(c);
	}
	_putchar('\n');
}
