str = raw_input()
str2 = ""
for i in str :
    if i.isupper() :
        str2 = str2 + i.lower()
        #print(i)
    else : str2 = str2 + i.upper()
print(str2)

