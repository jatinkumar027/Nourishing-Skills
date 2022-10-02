# Code to count number of matching characters in a pair of strings

# count function
def count(str1, str2):
    cnt, j = 0, 0

    # This loop iterates through str1 and store each character in i with each iteration
    for i in str1:

        # first condition check if character in i is present in str2 or not
        # second condition avoid the counting of the duplicate characters

        if str2.find(i) >= 0 and j == str1.find(i):
            cnt += 1
        j += 1

    print('No. of matching characters are : ', cnt)

# testcase 1
str1 = 'aabcddekl'
str2 = 'bbhhjek'
count(str1, str2)
# testcase 2
str3 = 'abcdef'
str4 = 'dehia'
count(str3, str4)
