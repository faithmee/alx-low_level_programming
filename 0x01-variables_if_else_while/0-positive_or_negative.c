i#include <stdio.h>
/**
  *main - determine if number is positive, zero or negative
  *return: always 0 (success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		print("%d is zero\n", 0);
	}
	else
	{
		print("%d is negative\n", n);
	}
	return (0);
