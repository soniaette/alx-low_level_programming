#include "main.h"

/**
 * print_alphabet - Printing the alphabet a to z
 * in lowercase, followed by a new line.
 *
 * Return: On success 0.
 */

void print_alphabet(void)
{
	char letr;

	for (letr = 'a'; letr <= 'z'; letr++)
		_putchar(letr);

	_putchar('\n');
}
