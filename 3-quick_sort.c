#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: integer
 * @size: list
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
recur(array, size, 0, size - 1);
}
/**
 * recur - function that recurs the list
 * @array: integer
 * @l: integer
 * @h: integer
 * @s: list
 * Return: void
 */
void recur(int *array, int l, int h, size_t s)
{
int p;
if (array == NULL || l >= h || l < 0)
{
return;
}
p = lomuto_p(array, l, h, s);
recur(array, l, p - 1, s);
recur(array, p + 1, h, s);
}
/**
 * lomuto_p - function tha lomuto the list
 * @array: integer
 * @l: integer
 * @h: integer
 * @s: list
 * Return: void
 */
int lomuto_p(int *array, int l, int h, size_t s)
{
int *p, x, y;
p = array + h;
x = l - 1;
if (array == NULL || l >= h || l < 0)
{
return (0);
}
for (y = l; y < h - 1; y++)
{
if (array[y] <= *p)
{
x = x + 1;
swap(&array[x], &array[y]);
print_array(array, s);
}
}
x++;
swap(&array[x], &array[h]);
print_array(array, s);
return (x);
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
