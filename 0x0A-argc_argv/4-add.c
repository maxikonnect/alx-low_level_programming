#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: count the number of arguments in the program
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int p, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (p = 1; argv[p]; p++)
	{
		n = strtol(argv[p], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
