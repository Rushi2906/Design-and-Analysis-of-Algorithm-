#include<stdio.h>
void selectionSort();
void printArray();

void main(){
    int arr [] = {2,5,1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
}

void selectionSort(int arr[],int n){
    int temp,i,j;
    for(i=0;i<n-1;i++){
        int minPos = i;
        for(j=i+1;j<n;j++){
            if(arr[minPos]>arr[j]){
                minPos = j;
            }
        }
        //swap
        temp = arr[minPos];
        arr[minPos] = arr[i];
        arr[i] = temp; 
    }
}

void printArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("");
}