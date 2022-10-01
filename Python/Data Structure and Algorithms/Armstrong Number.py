# Python program to check weather a number is Armstrong number or not


def armstrong(num):
    # initalize a sum variable
    sum = 0

    # adding the sum of cube of each digits to sum
    temp = num
    while temp > 0:
        digit = temp % 10
        sum += digit ** 3
        temp //= 10

    # display the final result
    if num == sum:
        print(num,"is an Armstrong number")
    else:
        print(num,"is not an Armstrong number")


def tests():
    test1 = 663
    test2 = 47

    print("Running tests...")

    armstrong(test1)
    armstrong(test2)

tests()