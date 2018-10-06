str = raw_input()
len = len(str)
kevin = 0
straut = 0
for i in range(0,len) :
    if str[i] == 'A' or str[i] == 'E' or str[i] == 'I' or str[i] == 'O' or str[i] == 'U':
        kevin += len - i
    else:
        straut += len - i

if kevin > straut :
    print("Kevin %d") %(kevin)
elif kevin < straut :
    print("Stuart %d") %(straut)
elif kevin == straut :
    print("Draw")





