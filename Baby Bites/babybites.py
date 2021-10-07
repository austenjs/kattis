a = int(input())

words = input().split()
flag = True
counter = 1
for b in words:
    if b != 'mumble':
        if counter != int(b):
            flag = False
    counter += 1

if flag:
    print("makes sense")
else:
    print("something is fishy")
