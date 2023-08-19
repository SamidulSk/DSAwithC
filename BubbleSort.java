//Bubble sort
class BubbleSort{
    public static void bubbleSort(int arr[]){

        for(int turn=0;turn<arr.length-1;turn++){
            System.out.println("Working on pass no:"+(turn+1));
             boolean isSorted=true;
            for(int j=0;j<arr.length-1-turn;j++){
                if(arr[j]>arr[j+1]){
                    isSorted=false;
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    
                }
            }
           if(isSorted){
             return;
            }
        }
    
    }
    
    public static void main(String args[]){
        int arr[]={1,2,3,5,6};
        bubbleSort(arr);
        Printarray(arr);
    }
}