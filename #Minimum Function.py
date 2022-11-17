def Min(arr, n):
    a = arr[0]
    for i in range(1,n):
        a = min(a, arr[i])
    return a
 
# Maximum Function
def Max(arr, n):
    a = arr[0]
    for i in range(1,n):
        a = max(a, arr[i])
    return a
 

arr = [664,747,854,456,8765]
n = len(arr)
print ("Minimum element of array:", Min(arr, n))
print ("Maximum element of array:", Max(arr, n))
 