#include<stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void reverse(int arr[],int size){
  int temp;
    for(int i = 0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}
int main()
{
    int arr[50]={1,5,9,65,45,54};
    int size=6;
    display(arr,size);
    reverse(arr,size);
    printf("After\n");
    display(arr,size);
return 0;
}