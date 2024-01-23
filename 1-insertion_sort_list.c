#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *a, *b, *c;
if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
for (a = (*list)->next; a != NULL; a = c)
{
c = a->next;
b = a->prev;
while (b != NULL && a->n < b->n)
{
swapn(list, &b, a);
print_list((const listint_t *)*list);
}
}
}
/**
 * swapn - function that swapsn
 * @h: list
 * @l: list
 * @s: list
 * Return: void
 */
void swapn(listint_t **h, listint_t **l, listint_t *s)
{
(*l)->next = s->next;
if (s->next != NULL)
{
s->next->prev = *l;
}
s->prev = (*l)->prev;
s->next = *l;
if ((*l)->prev != NULL)
{
(*l)->prev->next = s;
}
else
{
*h = s;
}
(*l)->prev = s;
*l = s->prev;
}
