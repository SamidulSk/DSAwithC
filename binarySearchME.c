#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
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
    int arr[50] = {2, 3, 6, 17,64,99};
    int size = 6;
    display(arr, size);
    int element;
    printf("Enter the element which you want to search");
    scanf("%d",&element);
    int index = binarySearch(arr, size, element);
    printf("The value %d is found in index number %d\n", element, index);
    return 0;
}