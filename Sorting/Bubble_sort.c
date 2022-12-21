#include<stdio.h>
void bubbleSort();
void printArray();

void main(){
    int arr [] = {2,5,1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    printArray(arr,n);
}

void bubbleSort(int arr[],int n){
    int temp,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void printArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("");
}
