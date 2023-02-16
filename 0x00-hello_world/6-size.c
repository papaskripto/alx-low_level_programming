#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on
 * should produce the exact same output as in the example
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf(sizeof(char));
	printf(sizeof(int));
	printf(sizeof(long int));
	printf(sizeof(long long int));
	printf(sizeof(float));
}
