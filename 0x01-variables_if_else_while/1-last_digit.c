#include <stdio.h>
/**
  *main - prints the last digit of a randomly generated number
  *and whether it is greator than 5, less than  or 0
  *Return: always 0
  */
int main(void)
{
	int n;

if ((n % 10) > 5)
{
	printf("last digit of %d is %d and is greator than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
	printf("last digit of %d is %d and is less tha 6and not 0\n", n, n % 10);
}
else
{
	printf("last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
