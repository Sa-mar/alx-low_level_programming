#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print size of various types on pc
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long long ll;
	long int li;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
