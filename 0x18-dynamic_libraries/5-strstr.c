#include "main.h"
/**
* _strstr - a function that locates a substring
* @haystack: a string
* @needle: a substring
* Return: a pointer to the beginning of the located substring or
* 0 if not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
