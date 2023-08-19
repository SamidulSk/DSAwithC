// Delete a element of a array from last position
#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void inddeletion(int arr[], int size){

       arr[size-1]= 0;
}
int main()
{
    int arr[20] = {7, 8, 12, 27, 88};
    int size = 5, element = 45;
   // int index;
    display(arr, 5);
    // printf("Enter the index number which you want to delete");
    // scanf("%d",index);
    inddeletion(arr, size);
    size = size - 1;
    display(arr, size);
    size=size+1;
    display(arr,size);
    return 0;
}