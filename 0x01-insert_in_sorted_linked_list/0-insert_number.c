#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - Function that inserts a number into a sorted singly linked list.
 * @head: pointer to head of linked list
 * @number: number to inset
 * Return: Address of the new node
 */

listint_t *insert_node(listint_t **head, int number)
{
        listint_t *current;
        listint_t *to_add;

        current = *head;

        to_add = malloc(sizeof(listint_t));

        if (to_add == NULL)
                return (NULL);
        else
        {
                to_add->n = number;
                to_add->next = NULL;

                if (*head == NULL || (*head)->n > number)
                {
                        to_add->next = *head;
                        *head = to_add;
                }

                while (current->next != NULL && current->next->n < number)
                {
                        current = current->next;
                }

                to_add->next = current->next;
                current->next = to_add;

                return (to_add);
        }
        return (NULL);
}
