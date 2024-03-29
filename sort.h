#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *x, int *y);
void swapn(listint_t **h, listint_t **l, listint_t *s);
int lomuto_p(int *array, int l, int h, size_t s);
void recur(int *array, int l, int h, size_t s);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void sn(listint_t **list, listint_t *a, listint_t *b);
int ma(int *a, int b);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
typedef enum kind_e
{
SPADE = 0,
HEART,
CLUB,
DIAMOND
} kind_t;
/**
* struct card_s - Playing card
*
* @value: Value of the card
* From "Ace" to "King"
* @kind: Kind of the card
*/
typedef struct card_s
{
const char *value;
const kind_t kind;
} card_t;
/**
* struct deck_node_s - Deck of card
*
* @card: Pointer to the card of the node
* @prev: Pointer to the previous node of the list
* @next: Pointer to the next node of the list
*/
typedef struct deck_node_s
{
const card_t *card;
struct deck_node_s *prev;
struct deck_node_s *next;
} deck_node_t;
void sort_deck(deck_node_t **deck);
void mer(int *a, int *b, size_t c, int *d, size_t e);
void merge_rec(int *x, size_t y);
void heap(int *a, size_t b, size_t c);
#endif
