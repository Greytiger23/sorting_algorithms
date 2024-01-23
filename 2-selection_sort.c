#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: integer
 * @size: list
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t a, b, c, min;
for (a = 0; a < size - 1; a++)
{
min = a;
for (b = a + 1; b < size; b++)
{
if (array[b] < array[min])
{
min = b;
}
}
swap(&array[a], &array[min]);
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
