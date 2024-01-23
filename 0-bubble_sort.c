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
size_t a, b, c;
for  (a = 0; a < size - 1; a++)
{
for (b = 0; b < size - b - 1; b++)
{
if (array[b] > array[b + 1])
{
swap(&array[b], &array[b + 1]);
for (c = 0; c < size; c++)
{
printf("%d", array[c]);
if (c < size - 1)
{
printf(", ");
}
}
printf("\n");
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
