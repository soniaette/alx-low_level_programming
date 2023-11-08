#include <stdio.h>

/**
 * main - This prints all arguments it receives.
 * @argc: This is the number of arguments supplied to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
