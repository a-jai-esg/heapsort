/*
    Written by:     BSIT 1-A, University of Cebu- Banilad  

*/

import java.util.Scanner;

public class HeapSort{
    public static void heapSort(int[] a, int SIZE){
        for(int i = (SIZE/2) - 1; i >= 0; i--){
            heapify(a, SIZE, i);
        }
        for(int i = SIZE - 1; i >= 0; i--){
            int temp = a[0];
            a[0] = a[i];
            a[i] = temp;
            heapify(a, i, 0);
        }
    }

    public static void heapify(int[] a, int SIZE, int i){
        int largest = i;

        int L = (2 * i) + 1, R = (2 * i) + 2;

        // left child is larger than root
        if(L < SIZE && a[L] > a[largest]){
            largest = L;
        }

        // right child is larger than root
        if(R < SIZE && a[R] > a[largest]){
            largest = R;
        }

        if(largest != i){
            int temp = a[i];
            a[i] = a[largest];
            a[largest] = temp;
            heapify(a, SIZE, largest);
        }
    }

    public static void PrintArray(int ar[], int size){
        for(int i = 0; i < size; i++){
            System.out.print(ar[i] + "\t");
        }
        System.out.println();
    }

    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int SIZE = scn.nextInt();
        
        int[] a = new int[SIZE];
        int i = 0;
        while(i < SIZE){
            System.out.print("Enter the element for " +"["+ i +"]"+ " : ");
            a[i] = scn.nextInt();
            i++;
        }
        System.out.println();
        System.out.println("* INITIAL ARRAY *");
        PrintArray(a, SIZE);
        System.out.println();
        heapSort(a, SIZE);
        System.out.println("* SORTED ARRAY *");
        PrintArray(a, SIZE); 
    }
}
