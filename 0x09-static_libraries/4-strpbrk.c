#include "main.h"

/**
	* _strpbrk - searchs a string for any of a set of bytes
	* @s: string to find a substring in
	* @accept: set of bytes to find in s
	* Description: searchs a string for any of a set of bytes
	* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}

	return (0);
}
