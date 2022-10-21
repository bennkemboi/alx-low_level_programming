#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: check integer number
 * Return: 1 (greater than zero) 0 (zero) -1 (less than zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
