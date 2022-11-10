#include "main.h"
/**
 * factorial - function factorial
 * @n : any number
 * Return: any integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
