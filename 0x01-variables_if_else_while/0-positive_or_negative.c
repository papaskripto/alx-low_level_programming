#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry point
 * Description: Assign a random number to the variable n each time it is executed
 * and print whether the number stored in variable n is negative or positive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
