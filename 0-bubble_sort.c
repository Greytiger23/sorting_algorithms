#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: integer
 * @size: list
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t a, b;
if (array == NULL || size < 2)
{
return;
}
for  (a = 0; a < size - 1; a++)
{
for (b = 0; b < size - a - 1; b++)
{
if (array[b] > array[b + 1])
{
swap(&array[b], &array[b + 1]);
print_array(array, size);
}
}
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
