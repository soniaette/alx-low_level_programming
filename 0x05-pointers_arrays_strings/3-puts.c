#include "main.h"

/**
 * _puts - This prints a string to stdout.
 * @str: This is the  string to be printed.
 */

void _puts(char *str)
{

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
