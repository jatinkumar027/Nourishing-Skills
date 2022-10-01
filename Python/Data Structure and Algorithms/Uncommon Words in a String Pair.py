# Python program to find a list of uncommon words between two strings

# Function to find all uncommon words
def unCommonWords(str1, str2):

	# count used to store all the word counts
	count = {}
	
	# inserting all the words of string str1 into hash
	for word in str1.split():
		count[word] = count.get(word, 0) + 1
	
	# inserting all the words of string str2 into hash
	for word in str2.split():
		count[word] = count.get(word, 0) + 1

	# return the list of uncommon words
	return [word for word in count if count[word] == 1]


# function to run test cases
def tests():
    # wrinting the test cases
    test1 = ["Hacktober comes in October", "Contribte in Hacktober during October"]
    test2 = ["Hello There", "Hello World is everyone's first program"]

    # running test case 1
    print("Test-1:")
    print("str-1:", test1[0])
    print("str-2:", test1[1])
    print("Uncommon words in Test-1:", unCommonWords(test1[0], test1[1]))
    
    # running test case 1
    print("Test-2:")
    print("str-1:", test2[0])
    print("str-2:", test2[1])
    print("Uncommon words in Test-2:", unCommonWords(test2[0], test2[1]))


# calling the tests() function
tests()