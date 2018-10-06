str = raw_input()
len = len(str)
digit = False
alpha = False
upper = False
lower = False
anum = False
for i in str :
    if i.isdigit() :
        digit = True
    if i.isalpha() :
        alpha = True
    if i.isupper() :
        upper = True
    if i.islower() :
        lower = True
    if i.isalnum() :
        anum = True
print(anum)
print(alpha)
print(digit)
print(lower)
print(upper)