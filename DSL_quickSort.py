


def partition(arr, l, h):

  
  pivot = arr[h]

  
  i = l - 1

  
  for j in range(l, h):
    if arr[j] <= pivot:
      
      i = i + 1

      
      (arr[i], arr[j]) = (arr[j], arr[i])

  
  (arr[i + 1], arr[h]) = (arr[h], arr[i + 1])

  # returning the position from where partition is done
  return i + 1


def quickSort(arr, l, h):
  if l < h:

    
    mid = partition(arr, l, h)

    
    quickSort(arr, l, mid - 1)

    
    quickSort(arr, mid + 1, h)

n = int(input("Enter the number of students in the class: "))
arr = []




quickSort(arr, 0, n - 1)

print('Sorted arr in Ascending Order:')
print(arr)