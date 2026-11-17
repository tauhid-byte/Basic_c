#include<stdio.h>
void SelectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
       int  min=i;
    for(int j=i+1;j<n;j++){
            if(arr[j]>arr[min]){
                min=j;

            }
    }
            if(min!=i){
               int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
        }
    }
}

int main(){
    int arr[5]={45,34,56,67,65};
    int n=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    printf("sorted array");
    for(int i=0;i<n;i++){
   printf(" %d ",arr[i]);


    }
    printf("/n");
    return 0;

}


