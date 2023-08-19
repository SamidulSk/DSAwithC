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
int deletion(int arr[], int size, int index)
{
    for (int i = index; i <size-1; i++)
    {
      arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[30] = {4, 3, 6, 2, 9, 1};
    int size = 6;
    int index;
    display(arr, size);
    printf("Enter the index number which you want to delete ");
    scanf("%d", &index);
    deletion(arr, size, index);
    size = size - 1;
    display(arr, size);
    return 0;
}