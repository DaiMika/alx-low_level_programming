#include "lists.h"
/**
 * list_len - counts the number of nodes in a linked list
 * @h: head of the  list
 * Return: number of elements
 **/
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int counter = 0;
temp = h;
while (temp)
{
counter++;
temp = temp->next;
}
return (counter);
}
