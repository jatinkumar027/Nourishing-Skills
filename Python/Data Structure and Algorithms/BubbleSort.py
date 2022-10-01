#Sorting algorithm to sort an array using Bubble Sort algorithm in Python 3
#This algorithm takes the array provided as the parameter and repeatedly swaps the adjacent numbers to finally get a sorted array

def bubbleSort(arr):
    
    #Variable containing the length of the array 
    length=len(arr)
    
    #Boolean variable to be taken as false for every iteration at first
    swapped =False
    
    #The range could also have been range(lenght) but the last iteration would be of no use then
    for m in range(length-1):

        for n in range(0,length-1-m):

            if arr[n]>arr[n+1]:
                swapped=True
                arr[n],arr[n+1]=arr[n+1],arr[n]

        #The swapped variable will be false if no swapping was needed in the entire array
        
        #Which means the array is already sorted(No need to iterate the loops further)
        if not swapped:
            return

#Printing the sorted array
def printing(arr):

    print("The sorted array is as follows:")

    for i in range (len(arr)):
        print(arr[i],end=" ")

#Test Case 1: 
array1=[64, 34, 25, 12, 22, 11, 90]

#Test Case 2:
array2=[332, 754, 23, 1, 0, 1, 645, 34]

#Change the array in function calls from array1 to array2 to see the output for the second test case 

#Function call
bubbleSort(array1)
printing(array1)

