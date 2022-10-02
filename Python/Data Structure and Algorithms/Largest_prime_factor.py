# Python code to find largest prime factor of number
import math

# A function to find largest prime factor
def maxPrimeFactors (n):
	m = n
	# Initialize the maximum prime factor variable with the lowest one
	maxPrime = -1
	
	for i in range(2, int(math.sqrt(n)) + 3):
		while n % i == 0:
			maxPrime = i
			n = n / i
		
	if m==n: 
		maxPrime=m
	
	return int(maxPrime)

# Driver code to test above function
n = 78
print(maxPrimeFactors(n))

n = 2140912357
print(maxPrimeFactors(n))

n=37
print(maxPrimeFactors(n))
