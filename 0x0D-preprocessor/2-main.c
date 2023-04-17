#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of argument
 * @argv: The array that hold the argument
 *
 * Description: prog that prints its name,followed by a new line
 *
 * Return: Always 0 (Sucess)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
