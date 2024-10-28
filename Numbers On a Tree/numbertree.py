tmp = input().split()
power = int(tmp[0])
root = 2 ** (power + 1) - 1
if len(tmp) == 1:
    print(root)
else:
    order = tmp[1]
    index = 0
    for direction in order:
        if direction == 'L':
            index = 2 * index + 1
        else:
            index = 2 * index + 2
    print(root - index)
