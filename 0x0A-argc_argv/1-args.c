#include <stdio.h>

/**
 * main - This prints the number of arguments passed to the program
 * @argc: This is the number of arguments supplied to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
