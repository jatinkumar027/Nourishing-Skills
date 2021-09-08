#include<stdio.h>

int insert_array(int arr[], int size, int capacity, int element, int index){

    if(size>=capacity){
        return -1;
    }

    for(int i=size; i>=index; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    return 1;
}

int delete_array(int arr[], int size, int index){
    if(index>=size){
        return -1;
    }

    for(int i=index; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    return 1;
}

int linear_search(int arr[], int size, int element){
    for(int i=0; i<size; i++) {
        if(arr[i]==element)
        return i;
    }
    return -1;
}

int binary_search(int arr[],int size,int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==element){
            return mid;
        }

        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

void display_Array(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
        printf("\n");
}

int main()
{
    int myarray[100] = {0,1,2,3,4,5};
    int size = 6;
    int newVal;
    int val = insert_array(myarray,size, 100, 45, 3 );

    if(val == -1){
        printf("Can't be inseted");
    }
    else{
        size += 1;
        display_Array(myarray, size);

    }

    newVal = delete_array(myarray, size, 6);
    if(val == -1){
        printf("Can't be deleted");
    }
    else{
        size -= 1;
        display_Array(myarray, size);
    }
    newVal = delete_array(myarray, size, 2);
    if(newVal == -1){
        printf("Can't be Deleted");
    }
    else{
        size -= 1;
        display_Array(myarray, size);

    }
    int elementTobesearched = 5;

    int res = linear_search(myarray, size, elementTobesearched);
    printf("Element %d found at index %d", elementTobesearched, res);
    printf("\n");

    newVal = delete_array(myarray, size, 2);
    if(val == -1){
        printf("Can't be deleted");
    }
    else{
        size -= 1;
        display_Array(myarray, size);
    }

    elementTobesearched = 3;

    res = binary_search(myarray, size, elementTobesearched);
    printf("Element %d found at index %d", elementTobesearched, res);

    return 0;
}