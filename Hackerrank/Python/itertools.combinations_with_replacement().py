from itertools import combinations_with_replacement
s,n = input().split()
ls=list(combinations_with_replacement(sorted(s),int(n)))
print(*[''.join(item) for item in ls], sep='\n')
