#include <stdio.h>

/**
 * main -   prints the largest prime factor of the number 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int n = 612852475143;
	long int a;

	for (a = 2; a < n; a++)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
	}
	printf("%ld\n", a);
	return (0);
}
