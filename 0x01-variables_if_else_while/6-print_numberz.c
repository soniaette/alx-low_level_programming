#include <stdio.h>
#include <unistd.h>

/**
 * main - This program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 * using putchar only without char variables.
 * Return: 0. On success.
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
