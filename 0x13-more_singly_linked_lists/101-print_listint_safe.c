i#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head
 *
 * Return: 0.
 */
size_t looped_listint_len(const listint_t *head)
{
 const listint_t *first, *hare;
 size_t nodes = 1;

 if (head == NULL || head->next == NULL)
 return (0);

first = head->next;
 hare = (head->next)->next;

 while (hare)
 {
 if (first == hare)
 {
 first = head;
 while (first != hare)
 {
 nodes++;
 first = first->next;
 hare = hare->next;
 }

 while (first != hare)
 {
 nodes++;
 first = first ->next;
 }

 return (nodes);
 }

 first = first->next;
 hare = (hare->next)->next;
 }

 return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
 size_t nodes, index = 0;

 nodes = looped_listint_len(head);

 if (nodes == 0)
 {
 for (; head != NULL; nodes++)
 {
 printf("[%p] %d\n", (void *)head, head->n);
 head = head->next;
 }
 }

 else
 {
 for (index = 0; index < nodes; index++)
 {
 printf("[%p] %d\n", (void *)head, head->n);
 head = head->next;
 }

 printf("-> [%p] %d\n", (void *)head, head->n);
 }

 return (nodes);
}

