# Write a Python function to find the maximum of three numbers.


a,b,c = int(input("enter num1: ")),int(input("enter num2: ")),int(input("enter num3: "))

max=0

if (num1 > num2) and (num1 > num3):
		
	print("num1 is greater") 
	max = num1
       
elif (num2 > num1) and (num2 > num3): 
        
	print("num2 is greater")
	max = num2 
else: 
    print("num3 is greater")     
   	max = num3

print(f"max number is = {max}") 
