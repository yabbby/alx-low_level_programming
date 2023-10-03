#include "main.h"

/**
	* _memcpy - copies memory area from src array to destination array
	* @dest: destination array
	* @src: src array
	* @n: number of bytes to copy from src to destination
	* Description: copies memory area from src array to destination array
	* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int num = n;

	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
