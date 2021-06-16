#include "palindrome.h"

/**
 * is_palindrome - Function that checks if an unsigned integer is a palindrome
 * @n: Is the number to be checked
 * Return: 1 if n is a palindrome, and 0 otherwise
*/

int is_palindrome(unsigned long n)
{
	unsigned long number = n, rev = 0;
	int digit;

	if (n < 10)
		return (1);

	while (n > 0)
	{
		digit = n % 10;
		rev = rev * 10 + digit;
		n /= 10;
	}

	if (number == rev)
		return (1);
	else
		return (0);
}