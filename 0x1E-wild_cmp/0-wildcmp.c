#include "holberton.h"

/**
 * wildcmp - compare two strings if one has a wildcard
 * @s1: string
 * @s2: string that can contain the special character *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	int tmp = 0;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*s1 != '\0')
			tmp = wildcmp(s1 + 1, s2);
		return (wildcmp(s1, s2 + 1) || tmp);
	}
	return (0);
}
