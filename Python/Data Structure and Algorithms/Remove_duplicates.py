from collections import Counter 
def remove_duplicate(str): # function

    str = str.split(" ") # spliting the string to get words
    word_dic = Counter(str)
    result = " ".join(word_dic.keys())
    print (result)
 
string = 'Why are you still you here?' # test case 1
remove_duplicate(string)

string = 'Go home and Go take sleep.' # test case 2
remove_duplicate(string)
