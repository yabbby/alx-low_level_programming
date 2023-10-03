#include "main.h"
#include <stdio.h>

/**
	* _strcat - concatenates two strings into one
	* @dest: string to concatenate to
	* @src: string you want to be concatenated to dest
	* Description: concatenates two strings into one
	* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	do {
		dest[i++] = src[j++];
	} while (src[j] != '\0');

	return (dest);
}
