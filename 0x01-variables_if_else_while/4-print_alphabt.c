#include <stdio.h>


/**
 * main - This prints the alphabet in lowercase except q and e.
 *
 * Return: On success. 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
