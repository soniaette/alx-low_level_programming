#include <stdio.h>

/*
 * This prints the name of the file that the program was compiled from.
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}


