#include <stdio.h>
#include <stdlib.h>
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
if (h - l > 0)
{
p = lomuto_p(array, l, h, s);
recur(array, l, p - 1, s);
recur(array, p + 1, h, s);
}
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
for (x = y = l; y < h; y++)
{
if (array[y] < *p)
{
if (x < y)
{
swap(array + y, array + x);
print_array(array, s);
}
x++;
}
}
if (array[x] > *p)
{
swap(array + x, p);
print_array(array, s);
}
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
