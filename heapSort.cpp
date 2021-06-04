#include <iostream>
#include <cstdio>

using namespace std;

void heapify(int arr[], int n, int i){
  int largest = i;
  int L = ( 2 * i ) + 1; // left
  int R = ( 2 * i ) + 2; // right

  if(L < n && arr[L] > arr[largest]){
    largest = L;
  }
  if(R < n && arr[R] > arr[largest]){
    largest = R;
  }
  if(largest != i)

}

int main(){
  int i;

return 0;
}
