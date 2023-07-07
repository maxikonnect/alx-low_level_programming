#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the number of arguments passed into it
* @argc: The size of argv array
* @argv: an array of size arg c
* Return: Always 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
