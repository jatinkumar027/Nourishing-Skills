# Selection sort in Python

def selectionSort(array, size):
   
    for step in range(size):
        min_index = step

        for i in range(step + 1, size):
         
            # to sort in descending order, change > to < in this line
            # select the minimum element in each loop
            if array[i] < array[min_index]:
                min_index = i
         
        # put min at the correct position
        (array[step], array[min_index]) = (array[min_index], array[step])


data1 = [-4, -6, 2, 4, 100]
data2 = [5, 1, 7, 9, 0, -4, 44, 6, 8]
size1 = len(data1)
size2 = len(data2)
selectionSort(data1, size1)
selectionSort(data2, size2)
print('\nSorted Array in Ascending Order:\n')
print(data1)
print(data2)
