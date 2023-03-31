#include "main.h"

/**
 * _strcmp - compare string
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	if (s1[i] > s2[i])
	{
		return (15);
	}
	else if (s1[i] < s2[i])
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
