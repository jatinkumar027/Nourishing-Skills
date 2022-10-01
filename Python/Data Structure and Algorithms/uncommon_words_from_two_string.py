#python  program to find uncommon words from two Strings
def uncommon(test1,test2):
    test1=test1.split(' ')   
    test2=test2.split(' ') 
    test3=[] #initialize empty list
    for i in test1:
        if i not in test2:
            test3.append(i)
    return test3

def tests():
    test1 = 'Hacktoberfest is started'
    test2 = 'Hacktoberfest is cool'

    print("Running tests...")

    uncommon(test1,test1)
    

tests()