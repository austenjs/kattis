a = int(input())
b = list(map(int,input().split()))
c = b.copy()
for i in b:
    if i <0:
        a -=1
        c.remove(i)
total = 0
for j in c:
    total += j

print(total/a)
