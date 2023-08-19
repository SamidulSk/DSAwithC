#include<stdio.h>
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void BubbleSort(int *arr,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        printf("Working on pass no %d\n",i+1);
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={2,5,1,6,9};
    int n=5;
    printf("The Original array\n");
    printArray(arr,n);
    printf("\nArray after sorting\n");
    BubbleSort(arr,n);
    printArray(arr,n);
return 0;
}