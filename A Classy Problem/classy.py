dic = {'upper': '2', 'middle' : '1', 'lower' : '0'}
testcases = int(input())
for testcase in range(testcases):
    num_people = int(input())
    lst = []
    for i in range(num_people):
        name, ranks = input().split(": ")
        ranks = ranks[:-6]
        ranks = ranks.split("-")
        rank = "".join(map(lambda x: dic[x], ranks[::-1]))
        rank = rank + "1" * (10 - len(rank))
        lst.append((name, rank))
    lst = sorted(lst, key = lambda x: x[0])
    lst = sorted(lst, key = lambda x: x[1], reverse = True)
    for elem in lst:
        print(elem[0])
    print("=" * 30)
