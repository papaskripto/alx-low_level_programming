#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int m, sumOne = 0, sumTwo = 0;

	for (m = 0; m < size; m++)
	{
		sumOne += a[(size +1) * m];
		sumTwo += a[(size -1) * (m + 1)];
	}
	printf("%d, %d\n", sumOne, sumTwo);
}
