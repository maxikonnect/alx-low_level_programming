#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char vim;

	for (vim = 'a'; vim <= 'z'; vim++)
	{
		_putchar(vim);
	}

	_putchar('\n');
}
