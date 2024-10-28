_ = input()

tmp = list(map(int,input().split()))

dic = {}
index = {}


for i, num in enumerate(tmp):
    if num in dic:
        dic[num] += 1
    else:
        dic[num] = 1
    index[num] = i

maxim = None
for num in sorted(tmp, reverse = True):
    if dic[num] == 1:
        maxim = index[num]
        break

print(maxim + 1) if maxim is not None else print('none')
        
    

