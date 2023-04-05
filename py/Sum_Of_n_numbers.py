# The system get number from user and process then sum
print("Enter the number")
n = int(input())
sum = 0
i = 1
while i <= n:
    sum = i + sum
    i = i + 1
print("The sum is  " + str(sum))
