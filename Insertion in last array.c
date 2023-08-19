//Array Traverse
#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\t");
}
int main()
{
    int arr[20]={4,6,2,23};
    display(arr,4);
    int arr[4]={56};
    display(arr,5);
return 0;
}