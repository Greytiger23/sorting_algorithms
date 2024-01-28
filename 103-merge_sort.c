#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * merge_sort - function that sorts an array of integers
 * in ascending order using the Merge sort algorithm
 * @array: integer
 * @size: list
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
merge_rec(array, size);
}
/**
* merge_rec – function that is recursive
* @x: integer
* @y: list
*/
void merge_rec(int *x, size_t y)
{
size_t a = y / 2;
int *b = x;
size_t c = a;
int *d = x + a;
size_t e = y - a, z;
if (y < 2)
{
return;
}
printf("Splitting...\n[left]: ");
for (z = 0; z < c; z++)
{
printf("%d", b[z]);
if (z < c - 1)
{
printf(", ");
}
}
printf("\n[right]: ");
for (z = 0; z < e; z++)
{
printf("%d", d[z]);
if (z < e - 1)
{
printf(", ");
}
}
printf("\n");
merge_rec(b, c);
merge_rec(d, e);
mer(x, b, c, d, e);
}
/**
* mer - Merges two sorted subarrays into a single sorted array
* @a: The array containing both subarrays
* @b: Pointer to the left subarray
* @c: Size of the left subarray
* @d: Pointer to the right subarray
* @e: Size of the right subarray
*/
void mer(int *a, int *b, size_t c, int *d, size_t e)
{
size_t x = 0, y = 0, z = 0;
int *tem = malloc((c + e) * sizeof(int));
if (tem == NULL)
{
return;
}
printf("Merging...\n[left]: ");
for (x = 0; x < c; x++)
{
printf("%d", b[x]);
if (x < c - 1)
{
printf(", ");
}
}
printf("\n[right]: ");
for (y = 0; y < e; y++)
{
printf("%d", d[y]);
if (y < e - 1)
{
printf(", ");
}
}
printf("\n");
x = 0;
y = 0;
while (x < c && y < e)
{
if (b[x] <= d[y])
{
tem[z++] = b[x++];
}
else
{
tem[z++] = d[y++];
}
}
while (x < c)
{
tem[z++] = b[x++];
}
while (y < e)
{
tem[z++] = d[y++];
}
for (x = 0; x < c + e; x++)
{
a[x] = tem[x];
}
printf("[Done]: ");
for (x = 0; x < c + e; x++)
{
printf("%d", d[x]);
if (x < c + e - 1)
{
printf(", ");
}
}
printf("\n");
free(tem);
}
