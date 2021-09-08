#include<stdio.h>

void print_array(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void insertion_sort(int arr[], int n){
    int key, j;
    for (int i = 1; i <= n-1; i++) // for each passes starting from 2nd element as we have to check that for every sorted array before that
    {
        // We will loop for each passes and compare that element with the sorted array before that
        key = arr[i];
        j = i - 1; // Index of the last element in the sorted array before the key element i.e. the element with which we have to compare
        while(arr[j] > key && j > -1){ //j > -1 so as to compare with positive index values
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
        
}

int main()
{
    int arr[] = {21, 15, 76, 4, 5, 2, 29, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array\n");
    print_array(arr, n);

    insertion_sort(arr, n);

    printf("\n\nSorted Array\n");
    print_array(arr, n);

    return 0;
}

    // int A[] = {12, 54, 65, 7, 23, 9};

    // -1   0    1   2   3   4   5
   //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
   //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

   //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
   //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

   //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
   //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
   //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
   //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
   //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

   // Fast forwarding and 4th and 5th pass will give:
   //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
   //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

   //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
   //      07, 09, 12, 23, 54, 65| --> After the 5th pass 
    