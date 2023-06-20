#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}

