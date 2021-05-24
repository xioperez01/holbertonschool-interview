#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - Function that checks if a singly linked list is a palindrome
 * * An empty list is considered a palindrome
 * @head: Pointer to singly linked list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int *list, counter = 0;

	list = malloc(sizeof(int));

	if (*head == NULL)
		return (1);

	while (tmp)
	{
		list[counter] = tmp->n;
		tmp = tmp->next;
		counter++;
	}

	tmp = *head;
	counter = counter - 1;

	while (tmp)
	{
		if (tmp->n == list[counter])
		{
			tmp = tmp->next;
			counter--;
		}
		else
			return (0);
	}

	return (1);

}