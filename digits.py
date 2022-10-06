
def check(number):

    while number > 0:

        temp=number%10

        if (number%temp) != 0:
        
            return "false"

        number=number//10
    
    return "true"

print (check(12))
print (check(13))


