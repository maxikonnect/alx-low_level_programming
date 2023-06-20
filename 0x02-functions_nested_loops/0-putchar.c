#include "main.h"

/**
 * main - Entry point of the program
 *
 * Prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	char *str = "_putchar";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
