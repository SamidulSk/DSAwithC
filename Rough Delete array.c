#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int deletion(int arr[],int size,int index){
    arr[index]=arr[size-1];
}

int main()
{
    int arr[50]={2,5,3,9,4};
    int size=5;
    display(arr,size);
    int index;
    printf("Enter the index number which you want to delete");
    scanf("%d",&index);
    deletion(arr,size,index);
    size=size-1;
    display(arr,size);
return 0;
}