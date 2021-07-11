from itertools import product
ls1=list(map(int, input().split()))
ls2=list(map(int, input().split()))
ans=sorted(list(product(ls1,ls2)))
for item in ans:
	print(item, end=" ")
