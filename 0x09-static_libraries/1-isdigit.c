#include "main.h"

/**
	* _isdigit - checks if int is a number b/n 0 and 9
	* @c: int
	* Description: checks if int is a number b/n 0 and 9
	* Return: int
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
