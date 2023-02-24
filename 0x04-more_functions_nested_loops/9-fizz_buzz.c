#include "main.h"
#include <stdio.h>

/**
  *main - Prints the numbers from 1 to 100 and a new line
  *but for multiples of three points Fizz instead of the number
  *and for the multiples of five print Buzz
  *Return: Always 0 (success)
  */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
		{
			if  (i % 3 == 0 && i % 5 != 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0 && 1 % 3 != 0)
			{
				printf("Buzz");
			}
			else if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (i == 1)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");

		return (0);
}

