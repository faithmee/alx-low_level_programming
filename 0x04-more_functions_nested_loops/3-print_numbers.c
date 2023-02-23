#include "main.h"
/**
  *print_number - Prints the numbers since 0 to 9
  *Return: The numbers since 0 to 9
  */
void print_numbers(void);
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
}

