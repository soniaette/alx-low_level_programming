#include "main.h"

/**
 * _puts_recursion - This prints a string, followed by a new line.
 * @s: This is the string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
