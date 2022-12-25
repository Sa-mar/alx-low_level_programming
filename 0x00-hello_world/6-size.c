#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print the sizes of types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	double b;
	char c;
	float d;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(a));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(b));
	printf("the size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a float is: %lu.\", (unsigned long)sizeof(d));

	return (0);
}
