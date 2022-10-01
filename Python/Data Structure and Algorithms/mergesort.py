def mergesort(array):
    if len(array) < 2:
        return array

    mid = len(array)//2
    left = mergesort(array[:mid])
    right = mergesort(array[mid:])

    return merge(left, right)


def merge(left, right):
    result = []
    i = 0
    j = 0
    while i < len(left) or j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1

        else:
            result.append(right[j])
            j += 1

        if i == len(left) or j == len(right):
            result.extend(left[i:] or right[j:])
            break
    return result


array1 = [5, 3, 6, 2, 4, 1, 6, 7, 4, 3, 1]
array2 = [34, 65, 23, 87, 53, 76]
print(mergesort(array1))
print(mergesort(array2))
