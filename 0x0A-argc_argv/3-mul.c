#include <stdlib.h>
#include <stdio.h>

/**
 * main - ENtry Point
 * @argc: The number of command
 * @argv: The pointer
 *
 * Description: a program that prints all arguments it receives
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int prod;

	prod = argv[1] * argv[2];
	printf("%d", prod);
	return (0);
}
