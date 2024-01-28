#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * heap_sort - function that sorts an array of integers in
 * ascending order using the Heap sort algorithm
 * @array: integer
 * @size: list
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
size_t x;
if (array == NULL || size < 2)
{
return;
}
for (x = size / 2; x > 0; x--)
{
heap(array, size, x - 1);
}
for (x = size - 1; x > 0; x--)
{
swap(&array[0], &array[x]);
print_array(array, size);
heap(array, x, 0);
}
}
/**
* heap – function heap
* @a: list
* @b: size
* @c: size
*/
void heap(int *a, size_t b, size_t c)
{
size_t l = c;
size_t x = 2 * c + 1;
size_t y = 2 * c + 2;
if (x < b && a[x] > a[l])
{
l = x;
}
if (y < b && a[y] > a[l])
{
l = y;
}
if (l != c)
{
swap(&a[c], &a[l]);
print_array(a, b);
heap(a, b, l);
}
}
/**
 * swap - function that swaps
 * @x: intger
 * @y: integer
 * Return: void
 */
void swap(int *x, int *y)
{
int tem = *x;
*x = *y;
*y = tem;
}
