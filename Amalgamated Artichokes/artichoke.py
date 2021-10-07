from math import sin,cos
a= list(map(int,input().split()))
def price(k):
    return(a[0]*(sin(a[1]*k+a[2]) + cos(a[3]*k + a[4]) +2))
differ = []
b = []
for i in range(1,a[5]+1):
    b.append(price(i))

d = b[0]

for i in b[1:]:
    if i > d:
        d = i
        continue
    elif i ==d:
        continue
    else:
        differ.append(d - i)
if differ != []:
    print((int((max(differ)*10000000))/10000000))
else:
    print (0.00)
        

