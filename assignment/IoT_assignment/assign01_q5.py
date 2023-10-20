# The marks obtained by a student in 3 different subjects are input by the user. Your program should calculate the average of subjects 
# and display the grade. The student gets a grade as per the following rules: Average Grade
# 90-100 A
# 80-89 B
# 70-79 C
# 60-69 D
# 0-59 F

a,b,c = float(input("enter math mark: ")),float(input("enter science mark: ")),float(input("enter english mark: "))
avg = (a+b+c) / 3

print(avg)

if 90 < avg <100:
	print("Grade A")
elif 80 < avg < 90:
	print("Grade B")
elif 70 < avg < 80:
	print("Grade C")
elif 60 < avg < 70:
	print("Grade D")
else:
	print("Grade F")
