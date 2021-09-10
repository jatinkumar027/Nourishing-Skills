#include<stdio.h>

void print_array(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do{
        while(arr[i] <= pivot){
            i++; 
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while(i<j);

    // Swap arr[low] and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; //return the index of the element where it is sitting acc to the algo
}

void quick_sort(int arr[], int low, int high){
    int partitionIndex;

    if(low < high){ // It means an array should have atleast one element
    partitionIndex = partition(arr,low,high); //Index of pivot after the partition
    quick_sort(arr, low, partitionIndex-1); //Sort the left Sub array
    quick_sort(arr, partitionIndex+1, high); // Sort the right Sub array
    }
}

int main()
{
    int arr[] = {21, 15, 76, 4, 5, 2, 29, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array\n");
    print_array(arr, n);

    quick_sort(arr, 0, n-1);

    printf("\n\nSorted Array\n");
    print_array(arr, n);

    return 0;
}

// Partitioning Process:
// 1. i = low
// 2. j = high
// 3. Pivot = low //for convenience
// 4. i++ until element > pivot is Found
// 5. j-- until element <= pivot is Found
// 6. Swap Arr[i] and Arr[j] and Repeat 4 and 5 until j is less than i
// 7. Swap pivot and Arr[j]

//int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    // int A[] = {9, 4, 4, 8, 7, 5, 6};
    // 3, 5, 2, 13, 12, 3, 2, 13, 45
    // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
    // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3
