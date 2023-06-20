#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * main - Entry point of the program
 *
 * Prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char *str = "_putchar";
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');

    return (0);
}
