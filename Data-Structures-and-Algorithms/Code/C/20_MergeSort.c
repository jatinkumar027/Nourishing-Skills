#include<stdio.h>

void print_array(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

void merge(int array[], int low, int mid, int high, int n){
    int i, j, k;
    int merged[n]; // Dynamic array is the proper way
    i = low; j = mid + 1; k = low;

    while(i<=mid && j<=high){
        if(array[i] < array[j]){
            merged[k] = array[i];
            i++;
            k++;
        }
        else{
            merged[k] = array[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        merged[k] = array[i];
        k++;
        i++;
    }

    while(j<=high){
        merged[k] = array[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        array[i] = merged[i];
    }
    
}

void merge_sort(int arr[], int low, int high, int n){
    if(low < high){
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid, n );
        merge_sort(arr, mid+1, high, n );
        merge(arr, low, mid, high, n);
    }
}

int main()
{
    int arr[] = {21, 15, 76, 4, 5, 2, 2, 29, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array\n");
    print_array(arr, n);

    merge_sort(arr, 0, n-1, n);

    printf("\n\nSorted Array\n");
    print_array(arr, n);

    return 0;
}