# Python code to convert Snake case to Pascal case
def snakeToPascal(string):
    # printing original string
    print("The string in snake case is : " + string)
    
    # Converting Snake case to Pascal case using title() + replace()
    res = string.replace("_", " ").title().replace(" ", "")
    
    # printing result
    print("The string after changing case to pascal case : " + str(res))


# function to run test cases
def tests():
    # writing the test cases
    test1 = "hacktober_fest"
    test2 = "i_love_coding"

    # executing the test cases
    snakeToPascal(test1)
    snakeToPascal(test2)

# calling the tests() function
tests()