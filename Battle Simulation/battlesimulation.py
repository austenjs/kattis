a = input()
b = ''

i = 0
while i != len(a):
    if a[i:i+3] == 'RBL' or a[i:i+3] == 'RLB' or a[i:i+3] == 'BRL' or a[i:i+3] == 'BLR' or a[i:i+3] == 'LBR' or a[i:i+3] == 'LRB':
        b += 'C'
        i += 3
    elif a[i] == 'R':
        b += 'S'
        i +=1
    elif a[i] == 'B':
        b += 'K'
        i +=1
    else:
        b += 'H'
        i +=1
print(b)

    
