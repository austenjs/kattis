a = list(map(str,input().split()))
b = []
c = 0
d = []
e = []
while a!= ['-1']:
    b.append(a)
    a = list(map(str,input().split()))

for i in b:
    e += [[i[1],i[2]]]
    if i[2] == 'right':
        c += int(i[0])


for k in range(65,91):
    count = 0
    for l in e:
        count += l.count(chr(k))
    for l in e:
        if l[0] == chr(k):
            if l[1] == 'right':
                c += (count-1)*20
                d.append(chr(k))

print(str(len(d)) +' ' + str(c))
                


        
    

    
    
    

        
