def lis(arr):
    n = len(arr)
 
    # Declare the list (array) for LIS and
    # initialize LIS values for all indexes
    lis = [1 for _ in range(n)]
 
    # Compute optimized LIS values in bottom up manner
    for i in range(1, n):
        for j in range(0, i):
            if arr[i] > arr[j] and lis[i] < lis[j] + 1:
                lis[i] = lis[j] + 1
 
    # Initialize maximum to 0 to get
    # the maximum of all LIS
    return max(lis)

string = input()
available_alphabets = lis(string)
print(26 - available_alphabets)
