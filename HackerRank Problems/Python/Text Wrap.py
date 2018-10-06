import textwrap
str = raw_input()
width = int(raw_input())
wrappedString = textwrap.fill(str,width)
print(wrappedString)
