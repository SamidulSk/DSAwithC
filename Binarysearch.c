 #include <stdio.h>
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low=0;
    high=size-1;
    while (low <= high)                                  //keep searching untill low<=high 
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
    int arr[] ={2,4,6,9,12,45,66,78,123,225,451};           //must be an SORTED array
    int size = sizeof(arr) / sizeof(int);
    // int size=8;
    int element = 9;
    int searchindex= binarysearch(arr, size, element);
    printf("The element %d was found at index no %d \n", element, searchindex);
    return 0;
}