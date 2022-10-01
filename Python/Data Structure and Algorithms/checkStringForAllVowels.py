def checkVowels(s):
    """ This function checks if all vowels are present atleast once in the string or not. """
    ### Converts string s into lowercase and then into set
    s = set(s.lower())
    
    ### Converting into a set will reduce time for checking in next step

    ### Iterate over set s and checks for presence of each vowel in the set
    for char in ["a", "e", "i", "o", "u"]:      
        ### If vowel not found in set return false
        if char not in s:                       
            return False
    
    ### return true after checking presence of each vowel in set s
    return True

### TEST CODE
### Remove test code before use and only use function checkVowels
test_cases = ["Hello", "This is a sentence which does not contain all vowels", "supercalifragilisticexpialidocious", "SEEquoiaL"]
### Iterating over test cases and checking if element string contains all vowels or not
for case in test_cases:
    print('"',case, '"', "contains all vowels:", checkVowels(case))