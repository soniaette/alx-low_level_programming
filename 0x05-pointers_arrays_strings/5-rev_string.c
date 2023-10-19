#include "main.h"

/**
 * rev_string - This reverses a string.
 * @s: This is the string to be reversed.
 */

void rev_string(char *s)
{

	int x;
	int len = 0;
	char y;

	for (x = 0; s[x] != '\0'; x++)
		len++;

	for (x = len - 1; x >= len / 2; x--)
	{
		y = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = y;
	}

}
