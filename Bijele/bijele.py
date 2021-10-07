a = list(map(int,input().split()))

cor = [1,1,2,2,2,8]
ans = []
for i in range(len(cor)):
    ans.append(cor[i]-a[i])

print(f'{ans[0]} {ans[1]} {ans[2]} {ans[3]} {ans[4]} {ans[5]}')
