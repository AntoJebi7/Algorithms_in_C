#include <stdio.h>
#include <stdlib.h>
// Compare function for qsort
int cmpfunc(const void* a, const void* b)
{
return (*(int*)a - *(int*)b);
}
// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
// Sort the given array
qsort(arr, n, sizeof(int), cmpfunc);
// Return k'th element in the sorted array
return arr[k - 1];
}
// Driver program to test above methods
int main()
{
int arr[] = { 12, 3, 5, 7, 19 };
int n = sizeof(arr) / sizeof(arr[0]), k = 2;
printf("K'th smallest element is %d",
kthSmallest(arr, n, k));
return 0;
}