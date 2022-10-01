def maxOccurance(target):
   
    char_dict={}  #dictionary to store key value pair (character and occurances)
    
    for i in target:
        if i in char_dict:   #if characcter is already in dictionary
            char_dict[i]=char_dict[i]+1   #frequency is incremented
        else:   #if characcter is not in dictionary
            char_dict[i] = 1  # character is added to the dictionary
    result= max(char_dict, key = char_dict.get)  #getting the character with maximum occurances 
    print(char_dict)
    print("Maximum frequency character: ",result)

maxOccurance("Adsadad adaa adsad ad56 34345")  #testing
maxOccurance("dasdaas 23123 3432 dsada1222")
