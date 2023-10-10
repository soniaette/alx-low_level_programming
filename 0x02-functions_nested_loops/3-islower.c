#include "main.h"

/**
 * _islower - This checks if a character is lowercase.
 * @c: This is the char to be checked.
 *
 * Return: 1 if character is lowercase and 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
