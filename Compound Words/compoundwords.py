words = []
while True:
    try :
        words += input().split()
    except EOFError:
        break

hashset = set()
n = len(words)
for i in range(n - 1):
    for k in range(i + 1, n):
        hashset.add(words[i] + words[k])
        hashset.add(words[k] + words[i])
for word in sorted(hashset):
    print(word)
