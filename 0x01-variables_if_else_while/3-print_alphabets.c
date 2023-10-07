#include <stdio.h>


/**
 *  main - Printing the alphabet in both lowercase and upper case.
 *  Return: On success. 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
