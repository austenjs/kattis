rooms = [0] * int(input())
students = int(input())

for i in range(len(rooms)):
    rooms[i] = students//len(rooms)

index = 0
while sum(rooms) != students:
    rooms[index] += 1
    index += 1

for k in rooms:
    print('*' * k)
