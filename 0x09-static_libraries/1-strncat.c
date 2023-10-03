#include "main.h"

/**
	* _strncat - copies from src at most n bytes to dest
	* @dest: destination string
	* @src: source string
	* @n: number of bytest to copy from src to dest
	* Description: copies from src at most n bytes to dest
	* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	do {
		if (n <= 0)
			break;
		dest[i++] = src[j++];
	} while (j < n && src[j] != '\0');

	return (dest);
}
