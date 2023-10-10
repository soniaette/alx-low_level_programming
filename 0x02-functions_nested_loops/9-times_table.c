#include "main.h"

/**
 * times_table - This prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int num, mult, ans;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			ans = num * mult;

			if (ans <= 9)
				_putchar(' ');
			else
				_putchar((ans / 10) + '0');

			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
