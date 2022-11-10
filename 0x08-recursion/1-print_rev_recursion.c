#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string s
 */
void _print_rev_recursion(cha *s)
{
	s = "benson\0";

	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
