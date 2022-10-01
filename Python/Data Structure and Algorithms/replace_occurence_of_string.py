 #replacing all occurrences of substring s1 with new string s2
 
test_str="Hacktoberfest"
s1="fest"
s2="hack"
 
#string split by substring
s=test_str.split(s1)
new_str=""
 
for i in s:
    if(i==""):
        new_str+=s2
    else:
        new_str+=i
 
#printing the replaced string
print(new_str)