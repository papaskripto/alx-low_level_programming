#include <stdio.h>

/**
 *main - finds and prints the largest prime factor of the number 612852475143
 *followed by a new number
 *Return: Always 0 (Success)
 */

int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
