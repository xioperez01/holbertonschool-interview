#include "regex.h"

/**
 * regex_match: Checks whether a given pattern matches a given string.
 * @str: string to scan
 * @pattern: regular expression
 *
 * Return: 1 if the pattern matches the string, or 0 if it doesn’t
 */
int regex_match(char const *str, char const *pattern)
{
	int dot_scan = 0, star_scan = 0;

	if (!str || !pattern)
		return (0);

	dot_scan = *str && (*str == *pattern || *pattern == '.');
	star_scan = *(pattern + 1) == '*';

	if (!*str && !star_scan)
	{
		return (*pattern ? 0 : 1);
	}

	if (dot_scan && star_scan)
	{
		return (regex_match(str + 1, pattern) || regex_match(str, pattern + 2));
	}
	else if (dot_scan && !star_scan)
	{
		return (regex_match(str + 1, pattern + 1));
	}
	else if (star_scan)
	{
		return (regex_match(str, pattern + 2));
	}

	return (0);
}
