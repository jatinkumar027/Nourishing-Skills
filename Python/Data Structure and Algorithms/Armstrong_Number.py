# Python program to check if the number is an Armstrong number or not

# input form user
number = int(input("Enter a number: "))

# initializing sum
sum = 0

# finding the sum of the cube of each digit
temp = number
while temp > 0:
   digit = temp % 10
   sum += digit ** 3
   temp //= 10

# display the result
if number == sum:
   print(number,"is an Armstrong number")
else:
   print(number,"is not an Armstrong number")


#Test Cases: 
#153 is an Armstrong number
#370 is an Armstrong number
