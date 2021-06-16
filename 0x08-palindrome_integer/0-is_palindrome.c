#include "palindrome.h"

/**
 * is_palindrome_rec - Checks if an unsigned integer is a palindrome
 * @n: Is the number to be checked
 * @factor: Factor that takes the first digit
 * Return: 1 if n is a palindrome, and 0 otherwise
*/

int is_palindrome_rec(int n, int factor)
{
	int right = n % 10;
	int left = n / factor;

	if (n >= 0 && n <= 9)
		return (1);

	if (right != left)
		return (0);

	n %= factor;
	n /= 10;
	factor /= 100;
	return (is_palindrome_rec(n, factor));
}

/**
 * is_palindrome - Function that checks if an unsigned integer is a palindrome
 * @n: Is the number to be checked
 * Return: 1 if n is a palindrome, and 0 otherwise
*/

int is_palindrome(unsigned long n)
{
	int counter = -1;
	unsigned long number = n;
	int factor = 10;

	while ((number / 10) > 0)
	{
		number = number / 10;
		counter++;
	}

	while (counter > 0)
	{
		factor *= 10;
		counter--;
	}

	return (is_palindrome_rec(n, factor));
}