data = list(map(int,input().split()))
strs = input()

ans = []
for i in range(len(strs)):
    if (strs[i] == "A"):
        ans.append(min(data))
    elif(strs[i] == "C"):
        ans.append(max(data))
    else:
        for i in range(len(data)):
            if data[i] != max(data) and data[i] != min(data):
                ans.append(data[i])

print(f"{ans[0]} {ans[1]} {ans[2]}")
        
