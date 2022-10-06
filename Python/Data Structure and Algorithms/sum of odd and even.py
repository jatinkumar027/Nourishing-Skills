
def sum(no):
    odd = 0
    even = 0
    while no > 0:
      
      odd+=no%10
      no//=10

      even+=no%10
      no//=10

    print ("odd",odd)
    print ("even",even)

sum(12345678)
sum(12)