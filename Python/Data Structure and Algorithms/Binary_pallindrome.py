def binarypalindrome(num):
 
     # convert number into binary
     binary = bin(num)
 
     # skip first two characters of string
     binary = binary[2:]
 
     # now reverse binary string and compare it with original
     return binary == binary[-1::-1]
 
# Main program
if __name__ == "__main__":
    num1 = 9
    num2=10
    print (binarypalindrome(num1))
    print (binarypalindrome(num2))