N, P = list(map(int, input().split()))
costs = list(map(lambda x: int(x) - P, input().split()))
ans = 0
current = 0
for cost in costs:
    current = max(current + cost, 0)
    if current > ans:
        ans = current
print(ans)
