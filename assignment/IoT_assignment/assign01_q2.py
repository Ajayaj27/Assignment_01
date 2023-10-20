# Write a program to accept a 4 digit number 
# a. Display face value of each decimal digit  
# b. Display place value of each decimal digit  -->9361 = 9 000 + 300 + 60 + 1
# c. Display no in reverse order by changing decimal place values If user enters a 4 digit number 9361 output should be  -->1639



#num = int(input("Enter 4 digit number: "))

#a = 1000
#while num != 0:

#	res = num // a
#	num = num % a

#	a = a // 10

#	print(f"{res}", end="  ")
	
#print()

#num = int(input("Enter 4 digit number: "))

#a = 1000
#print(f"{num} = ",end= " ")
#while num != 0:

#	rem = num // a
#	res = rem * a
#	num = num % a

#	a = a // 10
#	if num!=0:
#		print(f"{res}",end='+')
#	else:
#		print(f"{res}",end="")


num = int(input("Enter 4 digit number: "))

res = 0
while num != 0:

	rem = num % 10
	res = (res * 10) + rem
	num = num // 10
	res = res % 10
 
	print(f"{res}",end="")
print()

num = input("Enter 4 digit number: ")
l1 = [3, 2, 1, 0]
for i in l1:							# for num in l1:
																	
	print(f"{num[i]}",end="")			# print(f"{num}",end="")
