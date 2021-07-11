from itertools import permutations
s,k=list(input().split())
ans=sorted(list(permutations(s,int(k))))
for item in ans:
	print("".join(item))
