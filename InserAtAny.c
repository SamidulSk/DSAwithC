#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int insertion(int arr[],int size,int index,int element){
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
int main()
{
    int arr[50]={2,5,7,4,6};
    int size=5;
    display(arr,size);
    int index,element;
    printf("\nEnter the index number where you want to insert element");
    scanf("%d",&index);
    printf("\nEnter the element");
    scanf("%d",&element);
    insertion(arr,size,index,element);
    size=size+1;
    display(arr,size);
    
return 0;
}