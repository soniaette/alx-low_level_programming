#include "main.h"

/**
 * puts_half - This prints half of a string.
 * @str: This is the string.
 *
 */

void puts_half(char *str)
{

	int x;
	int y;
	int len = 0;

	for (x = 0; str[x] != '\0'; x++)
		len++;

	if ((len % 2) == 0)
		y = len / 2;

	else
		y = (len - 1) / 2;

	for (x = y; x < len; x++)
		_putchar(str[x]);

	_putchar('\n');


}
