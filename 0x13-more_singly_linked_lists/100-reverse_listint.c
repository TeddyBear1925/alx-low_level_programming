#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pre = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = next;
}

*head = pre;

return (*head);
}
