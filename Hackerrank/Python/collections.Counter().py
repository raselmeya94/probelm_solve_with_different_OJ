from collections import Counter
num=int(input())
ls=list(map(int, input().split()))
col=Counter(ls)
q=int(input())
sum=int(0)
for i in range(q):
	cous=list(map(int, input().split()))
	if col[cous[0]]>0:
		sum+=cous[1];
		col[cous[0]]-=1
print(sum)
