#include "main.h"
#include <stddef.h>

/**
	* _strstr - finds the first occurrence of the substring in string
	* @haystack: string to find substring in
	* @needle: substrint to find in haystack
	* Description: finds the first occurrence of the substring in string
	* Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}

	return (NULL);
}
