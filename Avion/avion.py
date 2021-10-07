ans = []
for i in range(5):
    strs = input()
    if ("FBI" in strs):
        ans.append(i+1)

if (len(ans)==0):
    print("HE GOT AWAY!")

else:
    anss = ""
    for i in range(len(ans)):
        anss += str(ans[i]) + " "
    print(anss)

    
