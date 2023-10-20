# Using for loop, write and run a Python program to find factorial from 0 to 10

#l1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for n in range(11):
    factorial = 1
    for i in range(1, n + 1):
        factorial *= i
    print(f"Factorial of {n} is {factorial}")
