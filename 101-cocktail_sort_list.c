#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * cocktail_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Cocktail shaker sort algorithm
 * @list: array
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
listint_t *a, *b, *c;
int x;
if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
a = *list;
b = NULL;
while (x)
{
x = 0;
c = a;
while (c->next != b)
{
if (c->n > c->next->n)
{
sn(list, c, c->next);
print_list(*list);
x = 1;
}
c = c->next;
}
if (!x)
{
break;
}
b = c;
x = 0;
while (c->prev != a)
{
if (c->n < c->prev->n)
{
sn(list, c->prev, c);
print_list((const listint_t *)*list);
x = 1;
}
c = c->prev;
}
a = c->next;
}
}
/**
 * sn - function that swaps the nodes
 * @list: list
 * @a: list
 * @b: list
 * Return: void
 */
void sn(listint_t **list, listint_t *a, listint_t *b)
{
if (a->prev)
{
a->prev->next = b;
}
else
{
*list = b;
}
if (b->next)
{
b->next->prev = a;
}
a->next = b->next;
b->prev = a->prev;
a->prev = b;
b->next = a;
}
