# This program is to do selective sorting
print("Enter no of elements in array")

# Getting number.of elements in the array
n = int(input())
a = [0] * (n + 1)

# Running loop to get array elements
for i in range(1, n + 1, 1):
    print("Enter the elements in array" + str(i))
    a[i] = int(input())

# Performing loop to arrange the elements in the ascending order
for i in range(1, n - 1 + 1, 1):
    for j in range(i + 1, n + 1, 1):
        
        # Using 'if loop' to find highest number and arrange it in order
        if a[j] < a[i]:
            m = a[j]
            a[j] = a[i]
            a[i] = m
print("The selection sort")
for i in range(1, n + 1, 1):
    print(a[i])
    
    # Printing the output in ascending order
