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
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long long total_sum = 0;

	while (1)
	{
		sum = num1 + num2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%llu\n", total_sum);

	return (0);
}
