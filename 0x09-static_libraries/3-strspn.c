#include "main.h"

/**
	* _strspn - gets length of a prefix substring
	* @s: String to check for substring
	* @accept: Substring to check for in s
	* Description: gets length of a prefix substring
	* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int length = 0;

	while (s[i] != '\0')
	{
		int j = 0;
		int found = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				length++;
				found = 1;
				break;
			}
			j++;
		}
		if (!found)
		{
			break;
		}
		i++;
	}

	return (length);
}
