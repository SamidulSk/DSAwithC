#include<stdio.h>
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void InsertionSort(int A[],int n){
    int key,j;
    for(int i=1;i<n-1;i++){
        printf("Working on pass no %d\n",i+1);
        key=A[i];
        j=i-1;
        while(j>=0&& A[j]>key){
            A[j+1]=A[j];
            j--;
        }
    }
    A[j+1]=key;
}
int main()
{
    int A[]={5,6,1,7,2,9};
    int n=6;
    printf("The Original array\n");
    printArray(A,n);
    printf("\nArray after sorting\n");
    InsertionSort(A,n);
    printArray(A,n);

return 0;
}