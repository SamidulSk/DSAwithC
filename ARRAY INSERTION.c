// INSERT A ELEMENT IN ANY INDEX OF ARRAY
#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int insertion(int arr[], int size, int index, int elment)
{
    for (int i = size-1; i >=index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = elment;
}
int main() 
{
    int arr[30] = {4, 3, 6, 2, 9, 1};
    int size = 6;
    int index;
    int element;
    printf("Enter the index number where you want to insert element ");
    scanf("%d", &index);
    printf("Enter the element which you want to insert");
    scanf("%d",&element);
    display(arr, size);
    insertion(arr, size, index, element);
    size = size + 1;
    display(arr, size);
    return 0;
}