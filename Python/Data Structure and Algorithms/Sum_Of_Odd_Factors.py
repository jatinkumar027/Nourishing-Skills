'''Program to Find Sum of Odd Factors of a Number'''

def run(value):

    # Raise exception for invalid input
    try:
        # Typecast to integer
        n = int(value)

        # Initialise sum
        sum = 1

        # Check if the number <= 0
        if n <= 0:

            print("Insert a positive number")

        else:
            for i in range(2,n):
                
                # Check if i is odd and completely divides n
                if (i % 2 != 0 and n % i == 0):
                    sum = sum + i

            # Display sum
            print(sum,'\n')


    except:
        print("Invalid input, please insert a positive number")

# Test Case 1
run("abc")
# Test Case 2
run("0")
# Test Case 3
run("-2")
# User Input
value = input()
run(value)
