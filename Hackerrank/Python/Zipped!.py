n,x=list(map(int, input().split()))
final=[]
for i in range(x):
	ls=list(map(float, input().split()))
	final.append(ls)
print(*[sum(item)/x for item in  list(zip(*final))],sep='\n')
