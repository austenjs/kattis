def deepcopy(lst):
	ans = []
	for i in lst:
		if type(i)!= list:
			ans.append(i)
		else:
			ans.append(deepcopy(i))
	return ans
def transposelefttop(lst):
    answer = deepcopy(lst)
    for row in range(4):
        for collumn in range(4):
            answer[row][collumn] = lst[collumn][row]
    return answer

def transposeleftbot(lst):
    answer = deepcopy(lst)
    for row in range(4):
        for collumn in range(4):
            answer[row][collumn] = lst[3-collumn][row]
    return answer

a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))
d = list(map(int, input().split()))
e = int(input())
f = [a,b,c,d]
if e == 1:
    g = transposeleftbot(f)
if e == 3:
    g = transposelefttop(f)
if e == 0:
    g = deepcopy(f)
    for i in range(4):
        g[i] = [g[i][3],g[i][2],g[i][1],g[i][0]]
if e ==2:
    g = f

for j in g:
    counter = 0
    counter = j.count(0)
    if counter == 4:
        continue
    elif counter ==3:
        j = j.sort()
    elif counter == 2:
        if j[3] != 0 :
                if j[2] != 0:
                        continue
                elif j[1] != 0:
                        j[1],j[2] = j[2],j[1]
                elif j[0] != 0:
                        j[0],j[2] = j[2],j[0]
        elif j[2]!=0 :
                if j[1] != 0:
                        j[1],j[2],j[3] = 0,j[1],j[2]
                elif j[0] != 0:
                        j[0],j[2],j[3] = 0, j[2],j[3]
        else:
                j = [0,0,j[0],j[1]]
for j in g:
        counter = 0
        counter = j.count(0)
        if counter ==1:
                if j[0] == 0:
                        continue
                elif j[1] == 0:
                        j[0],j[1] = j[1],j[0]
                elif j[2] == 0:
                        j[0],j[1],j[2] = 0,j[0],j[1]
                else:
                        j[0],j[1],j[2],j[3] = 0,j[0],j[1],j[2]
for j in g:
    if j[2] == j[3]:
        j[3],j[2],j[1],j[0] = 2*j[3],j[1],j[0],0
    if j[1] == j[3] and j[2] == 0:
        j[3],j[2],j[1],j[0] = 2*j[3],j[0],0,0
    if j[0] == j[3] and j[1] == 0 and j[2] == 0:
        j[3],j[2],j[1],j[0] = 2*j[3],0,0,0
    if j[2] == j[1]:
        j[2],j[1],j[0] = 2*j[2],j[0],0
    if j[2] == j[0] and j[1] == 0:
        j[2],j[1],j[0] = 2*j[2],0,0
    if j[0] == j[1]:
        j[0],j[1] = 0,2*j[1]
        
if e == 1:
    for i in range(4):
        f[i] = [g[0][3-i],g[1][3-i],g[2][3-i],g[3][3-i]]
if e ==0:
    for i in range(4):
        f[i] = [g[i][3],g[i][2],g[i][1],g[i][0]]
if e == 3:
    for i in range(4):
        f[i] = [g[0][i],g[1][i],g[2][i],g[3][i]]
if e == 2:
    f = g

print(f'{f[0][0]} {f[0][1]} {f[0][2]} {f[0][3]}\n{f[1][0]} {f[1][1]} {f[1][2]} {f[1][3]}\n{f[2][0]} {f[2][1]} {f[2][2]} {f[2][3]}\n{f[3][0]} {f[3][1]} {f[3][2]} {f[3][3]}')



