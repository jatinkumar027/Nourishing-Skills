#An algorithm to find the sum of all the even factors of a given number

def sum_even_factors( n):

    #The following is required since an odd number does not have any even factors
    if (n%2!=0):
        return 0

    #For even case
    else:
        #The variable to be returned
        sum=0

        #The following loop iterates over every even number until the number entered  
        for i in range(2,n+1,2):

            if  ((n%i)==0):
                sum+=i

        return sum

#sum_even_factors(n)=>function call

#Test case 1:
print(sum_even_factors(18))

#Test case 2:
print(sum_even_factors(35))

#Test case 3:
print(sum_even_factors(20))