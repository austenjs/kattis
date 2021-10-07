def printA(n):
    printer = 1
    days= 0
    while printer < n:
        printer *=2
        days +=1
    print(days+1)
    
a = int(input())
printA(a)
