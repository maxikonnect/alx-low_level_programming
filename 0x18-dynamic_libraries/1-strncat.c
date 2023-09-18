#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer pointing to destination input
 * @src: pointer pointing to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, p;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[c + p] = src[p];
	/*null terminate dest*/
	dest[c + p] = '\0';

	return (dest);
}
