#include "main.h"

/**
 * print_rev - This prints a string in reverse.
 * @s: This is the string to be printed.
 */

void print_rev(char *s)
{

	int x;
	int len = 0;

	for (x = 0; s[x] != '\0'; x++)
		len++;

	for (x = len - 1; x >= 0; x--)
		_putchar (s[x]);

	_putchar ('\n');
}
