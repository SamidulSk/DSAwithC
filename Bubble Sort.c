// Bubble sort with adaptive
#include <stdio.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void bubbleSort(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // for no of passes
    {
        printf("\nWorking on pass number %d\n", i + 1);
        isSorted = 1;                       // jabardasti sorted bol raha hu ->agar swap pe ghusa to 0 kar dunga warna return karlunga
        for (int j = 0; j < n - 1 - i; j++) // for comparison in each pass
        {
            if (arr[j] > arr[j + 1])    //checking
            {
                temp = arr[j]; // swap
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0; // fas gaya ha.ha..ha....   ab return nahi hoga
            }
        }
        if (isSorted)
        {
            return; // a to sach me sorted nikla
        }
    }
}
// to chalo bubble sort adaptive ka ak alak function bana le
void bubbleSortAdaptive(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("\nWorking on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
// normal bubble sort function
void bubbleSortNormal(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        printf("\nWorking on pass number %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    // int arr[]={1,4,6,7,8,9,1};
    int n = 6;
    printf("The original array\n");
    printArray(arr, n);
    bubbleSortNormal(arr, n);
    printArray(arr, n);
    bubbleSortAdaptive(arr, n);
    printf("\nThe sorted array\n");
    printArray(arr, n);
    return 0;
}