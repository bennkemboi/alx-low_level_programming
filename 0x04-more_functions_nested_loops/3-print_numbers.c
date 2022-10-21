#include "main.h"
/**
 *print_numbers - print nums from 0 to 9
 *Return: 0 always
 *
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 10)
		_putchar(c++ + '0');
	_putchar('\n');
}
