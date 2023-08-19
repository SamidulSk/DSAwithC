// all operation in a array
#include <stdio.h>
void ArrayTraverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int lastInsertion(int arr[], int size, int element)
{
    arr[size] = element;
}
int firstInsertion(int arr[], int size, int element)
{
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
}
int Insertion(int arr[], int size, int index, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}
int lastdeletioln(int arr[], int size)
{
    arr[size] = NULL;
}
int firstdelete(int arr[], int size)
{
    arr[0] = NULL;
}
int Deletion(int arr[], int size, int index)
{
    for (int i = index; i <= size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int linearSearch(int arr[], int size, int elemet)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elemet)
            return i;
    }
    return -1;
}
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100] = {2, 3, 5, 7, 8, 9, 45, 50, 59};
    int size = 9;
    ArrayTraverse(arr, size);
    int element;
    printf("\nEnter the element you want to insert in array");
    scanf("%d", &element);
    lastInsertion(arr, size, element);
    size = size + 1;
    ArrayTraverse(arr, size);
    int element2;
    printf("\nEnter the element which you want to insert at first");
    scanf("%d", &element2);
    firstInsertion(arr, size, element2);
    size = size + 1;
    ArrayTraverse(arr, size);
    int element3, index;
    printf("\nenter the element to insert");
    scanf("%d", &element3);
    printf("\nEnter the index number");
    scanf("%d", &index);
    Insertion(arr, size, index, element3);
    size = size + 1;
    ArrayTraverse(arr, size);
    lastdeletioln(arr, size);
    size = size - 1;
    printf("\nArray after delete the last element\n");
    ArrayTraverse(arr, size);
    firstdelete(arr, size);
    size = size - 1;
    printf("\nArray after delete the first element\n");
    ArrayTraverse(arr, size);
    int index2;
    printf("\nEnter the index number which you want to delete\n");
    scanf("%d", &index2);
    Deletion(arr, size, index2);
    size--;
    ArrayTraverse(arr, size);
    int element5;
    printf("\nEnter the element which you want to search\n");
    scanf("%d", &element5);
    int searchIndex = linearSearch(arr, size, element5);
    printf("The element is found in index no %d\n", searchIndex);
    int element6;
    printf("Enter the element which you want to search\n");
    scanf("%d", &element6);
    int searchindex2 = binarySearch(arr, size, element6);
    printf("\nElement is found in index number %d\n", searchindex2);

    return 0;
}