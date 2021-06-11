#include "lists.h"


/**
* check_cycle - Function that checks if a singly linked list has a cycle in it
* @list: Pointer to head of singly linked list
* Return: 0 if there is no cycle, 1 if there is a cycle
*/

int check_cycle(listint_t *list)
{
	listint_t *first;
	listint_t *second;


	if (!list || !(list->next) || !list->next->next)
		return (0);

	first = list->next;
	second = first->next;
	while (second && second->next)
	{
		if (first == second)
			return (1);
		first = first->next;
		second = second->next->next;
	}

	return (0);
}
