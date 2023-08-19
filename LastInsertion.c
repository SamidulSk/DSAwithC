//insert a element in last position of a array                                                       
#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[],int size,int element){                         
    arr[size]=element;
}
int main()
{
    int arr[20]={3,5,2,9};  
    int size=4;
    int element;
    printf("Enter the element you want to insert in array");
    scanf("%d",&element);
    display(arr,size);
    insertion(arr,size,element);
    size=size+1;
    display(arr,size);
return 0;
}