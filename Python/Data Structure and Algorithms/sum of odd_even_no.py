# here implemented the python program for sum of odd and even numbers
 

def sum(no):
    odd_number = 0
    even_number = 0
    while no > 0:
      
      odd_number+=no%10
      no//=10

      even_number+=no%10
      no//=10

    print ("odd number",odd_number)
    print ("even number",even_number)

sum(12345678)
sum(12)