#include <stdio.h>
/**
  *main - Entry point
  *it excutes and prints it
  *Return: aAways 0 (success)
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
