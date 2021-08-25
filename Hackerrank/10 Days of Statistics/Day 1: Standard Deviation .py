import math
num=int(input())
X=list(map(int,input().split()))
mean=round(sum(X)/num ,1)
ans=sum([(item-mean)**2 for item in X])/num
print(round(math.sqrt(ans) , 1))
