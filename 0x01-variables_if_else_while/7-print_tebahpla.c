#include <stdio.h>

/**
 * main - This code prints the lowercase alphabets in reverse.
 *
 * Return: On success 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
