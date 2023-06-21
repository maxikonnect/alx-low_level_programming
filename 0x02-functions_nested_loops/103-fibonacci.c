#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the sum of even-valued
 *              Fibonacci sequence not exceeding
 *              4 million
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, temp, limit = 4000000, total_sum = 0;

	while (a <= limit)
	{
		if (a % 2 == 0)
			total_sum += a;

		temp = a + b;
		a = b;
		b = temp;
	}

	printf("%lu\n", total_sum);

	return (0);
}
