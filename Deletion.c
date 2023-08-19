 //Delete a element from a array 
#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);              
    }
    printf("\n");
}
void inddeletion(int arr[],int size,int index){       
    for(int i=index;i<size-1;i++)
    {
           arr[i]=arr[i+1];
    }

}
int main()
{
    int arr[20]={7,8,12,27,88};
    int size=5,element=45,index=3;
    display(arr,5);
    inddeletion(arr,size,index);
    size=size-1;
    display(arr,size);
return 0;
}