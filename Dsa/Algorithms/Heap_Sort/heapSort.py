# create maxheap
from operator import le


def maxheapify(arr, n, i):
    large = i
    l = 2*i+1
    r = 2*i+2

    if l < n and arr[i] < arr[l]:
        large = l
    if r < n and arr[large] < arr[r]:
        large = r
    if large != i:
        arr[i], arr[large] = arr[large], arr[i]
        maxheapify(arr, n, large)


# insert
def insert(arr, num):
    size = len(arr)
    if size == 0:
        arr.append(num)
    else:
        arr.append(num)
        size += 1

        for i in range((size//2)-1, -1, -1):
            maxheapify(arr, size, i)


def heapSort(arr):
    n = len(arr)
    for i in range((n//2)-1, -1, -1):
        maxheapify(arr, n, i)
    for i in range(n-1, 0, -1):
        arr[0], arr[i] = arr[i], arr[0]
        maxheapify(arr, i, 0)


arr = []
insert(arr, 3)
insert(arr, 4)
insert(arr, 9)
insert(arr, 5)
insert(arr, 2)

print("Max-Heap array: " + str(arr))

heapSort(arr)
print("After sort: " + str(arr))
