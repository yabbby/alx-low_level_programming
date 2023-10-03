#include "main.h"

/**
	* _strncpy - copies src string to dest
	* @dest: destination string
	* @src: source string
	* @n: number of bytes to copy from src to destination
	* Description: copies src string to dest
	* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
