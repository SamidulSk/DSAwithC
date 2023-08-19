#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 4, 55, 21, 82, 256, 2};
    // int size= sizeof(arr)/sizeof(int);
    int size = 8;
    int element = 21;
    int searchindex = linearsearch(arr, size, element);
    printf("The element %d was found at index no %d \n", element, searchindex);
    return 0;
}