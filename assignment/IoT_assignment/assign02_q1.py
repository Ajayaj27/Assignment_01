# Write a function to return simple interest.

P,R,N = float(input("enter principle amount ")),float(input("enter rate of interest  ")),float(input("enter number of year "))
SI = (P*N*R) / 100
print(f"Simple Interest={SI}")

