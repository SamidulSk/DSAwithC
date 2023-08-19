#include <stdio.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void SelectionSort(int A[], int n)
{
    int indexofMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexofMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofMin])
            {
                indexofMin = j;
            }
        } // swap A[i] and indxofmin
        temp = A[i];
        A[i] = A[indexofMin];
        A[indexofMin] = temp;
    }
}
int main()
{
    int A[] = {5, 6, 1, 7, 2, 9};
    int n = 6;
    printf("The Original array\n");
    printArray(A, n);
    printf("\nArray after sorting\n");
    SelectionSort(A, n);
    printArray(A, n);
    return 0;
}