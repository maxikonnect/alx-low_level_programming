#include <unistd.h>

/**
 * _putchar  - writes the character c to the stdout
 * @c: The character to print
 *
 * Return: on success 1
 * on error return -1 and set errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
