#include <stdio.h>
/**
  *main - entry point
  *description : printing alphabets lowercase and uppercase
  *return: always 0
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(m);
		m++;
	}
	putchar ('\n');
	return (0);
}

