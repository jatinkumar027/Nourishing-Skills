#include<stdio.h>

void print_array(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void bubble_sort(int arr[], int n){
    int temp;

    for (int i = 0; i < n-1; i++) // For number of passes
    {
        for (int j = 0; j < n-1-i; j++) // For comparison of two elements in each passes
        {
            if(arr[j]>arr[j+1]){
                //Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printf("\nArray after pass no %d: ", i+1);
        print_array(arr, n);
    }
    
}

void bubble_sort_adaptive_and_optimized(int arr[], int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of passes
    {   

        isSorted = 1;
        for (int j = 0; j < n-1-i; j++) // For comparison of two elements in each passes
        {
            if(arr[j]>arr[j+1]){
                //Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
            return;
        printf("\nArray after pass no %d: ", i+1);
        print_array(arr, n);
    }    
}

int main()
{
    int arr[] = {21, 15, 76, 4, 5, 2, 29, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Before\n");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("\n\nSorted Array\n");
    print_array(arr, n);

    int arr2[] = {21, 15, 76, 4, 5, 2, 29, 20};
    int n2 = sizeof(arr)/sizeof(arr[0]);
    printf("\n\n==========================\n");
    printf("\nOptimized Bubble Sort\n");

    bubble_sort_adaptive_and_optimized(arr2, n2);

    printf("\n\nSorted Array\n");
    print_array(arr2, n2);

    return 0;
}