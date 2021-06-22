/*
    Written By: University of Cebu - Banilad, BSIT 1-A  
*/

#include <stdio.h>

#define SIZE 10

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int arr[], int n, int i){
  int largest = i;
  int L = (2 * i) + 1;
  int R = (2 * i) + 2;
  
  // Left child is greater than root
  if(L < n && arr[L] > arr[largest]){
    largest = L;
  }
  // Right child is greater than root
  if(R < n && arr[R] > arr[largest]){
    largest = R;
  }
  if(largest != i){
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapsort(int arr[], int n){
  for(int i = (n/2 - 1); i>= 0; i--){
    heapify(arr,n,i);
  }

  for(int i = n-1; i >= 0; i--){
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0);
  }
}
  
void printArray(int arr[], int n){
  printf("Array's elements are: \n");
  for(int i = 0; i < n; i++){
    printf("[Element%d] %d \n", i, arr[i]);
  }
}

int main(){
  //int arr[] = {12, 11, 13, 5, 6, 7};
  int arr[SIZE];
  int i = 0;
  printf("%ld is array's size\n",sizeof(arr));
  printf("%ld array[0]\n", sizeof(arr[0]));
  //int n = sizeof(arr) / sizeof(arr[0]); 
  
  while(i < SIZE){
    printf("Enter value for [%d]: ", i);
    scanf("%d", &arr[i]);
    i++;
  }
  printf("*INITIAL ARRAY*\n");
  printArray(arr, SIZE);
  heapsort(arr, SIZE);
  printf("\n");  
  printf("*SORTED ARRAY*\n");
  printArray(arr, SIZE);
  return 0;
}
