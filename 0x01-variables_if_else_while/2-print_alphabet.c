#include <stdio.h>


/**
 * main - Printing the alphabet in lowercase.
 * Return: 0. On success.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
