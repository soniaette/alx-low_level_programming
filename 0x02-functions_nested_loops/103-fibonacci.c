#include <stdio.h>

/**
 * main - This prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4,000,000.
 *
 * Return: On success 0.
 */

int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fibosum;
	float tot_sum;

	while (1)
	{
		fibosum = fibo1 + fibo2;
		if (fibosum > 4000000)
			break;

		if ((fibosum % 2) == 0)
			tot_sum += fibosum;

		fibo1 = fibo2;
		fibo2 = fibosum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
