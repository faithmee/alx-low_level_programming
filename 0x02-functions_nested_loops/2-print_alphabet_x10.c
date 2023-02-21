#include <stdio.h>
/**
 *main - Entry point
 *description: print alphabets except q and o
 *Return: Always 0
 */
int main(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten ++)
	{
		for (la = 'a'; la <= 'z'; la++)
			putchar(la);
		putchar('\n');
	}
}
