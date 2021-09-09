#include<stdio.h>

void print_array(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void selection_sort(int arr[], int n){
    int IndexOfMinimum, temp;
    for (int i=0; i<n-1; i++){
        IndexOfMinimum = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[IndexOfMinimum]){
                IndexOfMinimum = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[IndexOfMinimum];
        arr[IndexOfMinimum] = temp;
    }
}

int main()
{
    int arr[] = {21, 15, 76, 4, 5, 2, 29, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array\n");
    print_array(arr, n);

    selection_sort(arr, n);

    printf("\n\nSorted Array\n");
    print_array(arr, n);

    return 0;
}

    // int A[] = {3, 5, 2, 13, 12};
    
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13

