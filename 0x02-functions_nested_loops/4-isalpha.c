#include <stdio.h>
/**
 *_isalpha - Checks for alphabets
 *@c: character to be checked
 *Return: 1 if character is a letter, 0 character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
