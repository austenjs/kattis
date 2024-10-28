class Node: 
    def __init__(self, parent, rank): 
        self.parent = parent 
        self.rank = rank

def find(parents,u):
    if parents[u].parent != u:
        parents[u].parent = find(parents,parents[u].parent)
    return parents[u].parent

def union(parents,u,v):
    u_parent = find(parents,u)
    v_parent = find(parents,v)
    if parents[u_parent].rank > parents[v_parent].rank:
        parents[v_parent].parent = u_parent
    elif parents[u_parent].rank < parents[v_parent].rank:
        parents[u_parent].parent = v_parent
    else:
        parents[v_parent].parent = u_parent
        parents[u_parent].rank += 1

N, M = list(map(int, input().split()))
parents = [Node(i, 0) for i in range(N + 1)]
for i in range(M):
    a, b = list(map(int, input().split()))
    union(parents, a, b)

not_connected = False
for i in range(2, N + 1):
    if find(parents, i) != find(parents, 1):
        print(i)
        not_connected = True

if not not_connected:
    print('Connected')
