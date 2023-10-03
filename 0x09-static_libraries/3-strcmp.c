#include "main.h"
#include <stdio.h>

/**
	* _strcmp - comparest two strings
	* @s1: string 1
	* @s2: string 2
	* Description: comparest two strings
	* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int difference = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	difference = s1[i] - s2[i];

	return (difference);
}
