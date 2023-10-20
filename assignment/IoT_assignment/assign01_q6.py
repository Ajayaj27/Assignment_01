# Write a Python function to calculate the factorial of a number (a non-negative integer). The function accepts the number as an argument.

#def factorial(n):

#def n = 5	
#	n = int(input("Enter number "))

#	if n < 0:
#		print("Factorial is not defined for negative numbers")
#	elif n == 0 | n == 1:
#		return 1
#	else:
#		result = n * factorial(n-1)
	
#		result = factorial(n)
#print(f"The factorial of {n} is= {result}")


def factorial(n):
    if n < 0:
        print("Factorial is not defined for negative numbers")
        return 0
    elif n == 0 or n == 1:
        return 1
    else:
        result = n * factorial(n - 1)
        return result

n = int(input("Enter a number: "))

result = factorial(n)
#if result is not None:
print(f"The factorial of {n} is {result}")

