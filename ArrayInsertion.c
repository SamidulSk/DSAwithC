//Insert a  element in middle of array
#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);              //code for traversal
    }
    printf("\n");
}
int indinsertion(int arr[],int size,int element,int capacity,int index){        //code for insertion
    if(size>=capacity){
      return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
            arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main()
{
    int arr[20]={7,8,12,27,88};
    int size=5,element=45,index=3;
    display(arr,5);
    indinsertion(arr,size,element,100,index);
    size=size+1;
    display(arr,size);
return 0;
}