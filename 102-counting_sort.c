#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * counting_sort - function that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 * @array: integer list
 * @size: list
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
int *a, *b, c, d;
if (array == NULL || size < 2)
{
return;
}
b = malloc(sizeof(int) * size);
if (b == NULL)
{
return;
}
c = ma(array, size);
a = malloc(sizeof(int) * (c + 1));
if (a == NULL)
{
free(b);
return;
}
for (d = 0; d < (c + 1); d++)
{
a[d] = 0;
}
for (d = 0; d < (int)size; d++)
{
a[array[d]] += 1;
}
for (d = 0; d < (c + 1); d++)
{
a[d] += a[d - 1];
}
print_array(a, c + 1);
for (d = 0; d < (int)size; d++)
{
b[a[array[d]] - 1] = array[d];
a[array[d]] -= 1;
}
for (d = 0; d < (int)size; d++)
{
array[d] = b[d];
}
free(b);
free(a);
}
/**
 * ma - get the maximum value
 * @a: list
 * @b: integer
 * Return: void
 */
int ma(int *a, int b)
{
int x, y;
for (x = a[0], y = 1; y < b; y++)
{
if (a[y] > x)
{
x = a[y];
}
}
return (x);
}
