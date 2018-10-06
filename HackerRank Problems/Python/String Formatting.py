n = int(raw_input())
padding = len(bin(n).lstrip('0b'))
for i in range(1,n+1) :
    print("%s %s %s %s") %(str(i).rjust(padding),oct(i).lstrip('0').rjust(padding),hex(i).lstrip('0x').upper().rjust(padding),bin(i).lstrip('0b').rjust(padding))