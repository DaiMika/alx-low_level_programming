#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head of a list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *pointer;
	listint_t *temp = head;

	if (head != NULL)
	{
		pointer = *head;
		while ((temp = pointer) != NULL)
		{
			curr = pointer->next;
			free(temp);
		}
		*head = NULL;
	}
}
