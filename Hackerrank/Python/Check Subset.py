test=int(input())
for _ in range(test):
    (_, A)=(int(input()),set(map(int, input().split())))
    (_, B)=(int(input()),set(map(int, input().split())))
    print(A.issubset(B))
