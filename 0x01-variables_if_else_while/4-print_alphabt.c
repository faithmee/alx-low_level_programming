#include <stdio.h>
/**
  *main - Entry point
  *description: print alphabets except q and o
  *Return: Always o
  */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

