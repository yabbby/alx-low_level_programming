#include "main.h"

/**
	* _memset - fills memory with a constant byte
	* @s: array to fill with a byte
	* @b: character to fill array s with
	* @n: number of bytes to fill array s with character b
	* Description: fills memory with a constant byte
	* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int x = n;

	while (i < x)
	{
		s[i++] = b;
	}

	return (s);
}
