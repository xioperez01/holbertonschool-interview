#include "lists.h"

/**
* check_cycle - Function that checks if a singly linked list has a cycle in it
* @list: Pointer to head of singly linked list
* Return: 0 if there is no cycle, 1 if there is a cycle
*/

int check_cycle(listint_t *list)
{

	listint_t *tmp = list;

	if (!list || !list->next || !list->next->next)
		return (0);

	tmp = tmp->next;

	while (tmp != NULL && tmp->next != NULL)
	{
		if (tmp->next == list)
			return (1);
		tmp = tmp->next;
	}

	return (0);
}
