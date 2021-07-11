from itertools import combinations
s,n = input().split()
for i in range(1, int(n)+1):
    ls=list(combinations(sorted(s),i))
    print(*[''.join(item) for item in ls], sep='\n')
