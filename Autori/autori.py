ans = ''
n =input()
ans += n[0]
for i in range(1,len(n)+1):
    if ord(n[i-1]) == 45:
        ans += n[i]
print(ans)
    
    
