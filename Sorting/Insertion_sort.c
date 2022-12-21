#include<stdio.h>
void insertionSort();
void printArray();

void main(){
    int arr [] = {2,5,1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    printArray(arr,n);
}

void insertionSort(int arr[],int n){
    int i,j;
    for(i=1;i<=n-1;i++){
         int curr = arr[i];
         int prev = i-1;
         while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
         } 
         arr[prev+1]=curr;
    }
}

void printArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("");
}