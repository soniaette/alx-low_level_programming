#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints the multiplication of two numbers followedby a new line.
 * @argc: This is the number of arguments given to the program.
 * @argv: This is an array of pionters to the arguments.
 *
 * Return: If the progam receives two arguments - 0.
 *	   If the program does not reveive two arguments - 1.
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
