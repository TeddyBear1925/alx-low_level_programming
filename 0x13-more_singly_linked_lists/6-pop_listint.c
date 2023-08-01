#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the first element in the linked list
 *
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int nm;

if (!head || !*head)
return (0);

nm = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (nm);
}
