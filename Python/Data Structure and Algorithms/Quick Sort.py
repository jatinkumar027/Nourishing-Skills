# Python program for Quicksort Sort Algorithm

# Function to find partition index
def partition(arr, low, high):

	# choosing the rightmost element as the pivot
	pivot = arr[high]

	# pointer pointing to greater element
	i = low - 1

	# comparing the pivot with elements while traversing the array
	for j in range(low, high):
		if arr[j] <= pivot:

			# If current element is smaller than pivot swap it with the element pointed by i
			i = i + 1

			# Swapping the elements at i and j
			(arr[i], arr[j]) = (arr[j], arr[i])

	# Swap the pivot element with the element pointed by i
	(arr[i + 1], arr[high]) = (arr[high], arr[i + 1])

	# Return the partition index
	return i + 1


# function for quicksort algorithm
def quickSort(arr, low, high):
	if low < high:

		# Find pivot element
		pi = partition(arr, low, high)
        # elements at the left are smaller than element pivot
        # elements at the right are greater than element pivot

		# Recursive call to the left of pivot
		quickSort(arr, low, pi - 1)

		# Recursive call to the right of pivot
		quickSort(arr, pi + 1, high)


data = [-21, 1, 57, 92, -3, 4, 7, 3]
print("Unsorted Array")
print(data)

size = len(data)

quickSort(data, 0, size - 1)

print('Sorted Array in Ascending Order:')
print(data)
