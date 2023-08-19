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
return 0;
}